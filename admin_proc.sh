#!/bin/bash

export SHELLOPTS
set -e
#set -x
declare -a FUNCS
FUNCS=(init assert-pid show-procs get-last-pid-mac get-last-pid-linux get-last-pid show-fds show-proc-info)

init()
{
    if [[ $OSTYPE == 'darwin'* ]]; then
        PSTREE='pstree'
        if ! which pstree >/dev/null 2>&1; then
            echo "command 'pstree' not installed." >&2
            echo 'to install:' >&2
            echo '  brew install pstree' >&2
            exit 1
        fi
        GET_LAST_PID=get-last-pid-mac
    else
        PSTREE='pstree -p'
        GET_LAST_PID=get-last-pid-linux
    fi
}

# shellcheck disable=SC2317  # Don't warn about unreachable commands in this function
assert-pid()
{
    PID="$1"

    if [ -z "$PID" ]; then
        echo 'USAGE:' >&2
        echo "  $0 \$pid" >&2
        echo 'you can get pid by command below (DO ON THE PROCESS to get pid!):' >&2
        echo '  echo $$' >&2
        exit 1
    fi
}

show-procs()
{
    PID="$1"

    echo "# Processes on $PID"
    $PSTREE "$PID"
}

get-last-pid-mac()
{
    PID="$1"

    LAST_ROW="$(show-procs "$PID" | tail -n 1)"
    LAST_PID="$(echo "$LAST_ROW" | awk '{print $2}')"
    echo "$LAST_PID"
}

get-last-pid-linux()
{
    PID="$1"

    LAST_ROW="$(show-procs "$PID" | tail -n 1)"
    LAST_PID="$(echo "$LAST_ROW" | awk -F\( "{print substr (\$NF, 0, length(\$NF)-1)}")"
    echo "$LAST_PID"
}

get-last-pid()
{
    $GET_LAST_PID "$1"
}

show-fds()
{
    PID="$1"

    echo "# fds on $PID"
    lsof -a -p "$PID"
}

show-proc-info()
{
    PID="$1"

    init
    show-procs "$PID"
    LAST_PID="$(get-last-pid "$PID")"
    echo
    show-fds "$LAST_PID"
}

assert-pid()
{
    PID="$1"

    if [ -z "$PID" ]; then
        echo 'USAGE:' >&2
        echo "  $0 \$pid" >&2
        echo 'you can get pid by command below (DO ON THE PROCESS to get pid!):' >&2
        echo '  echo $$' >&2
        echo 'or' >&2
        echo '  pgrep bash | xargs -I _ -L 1 ./admin_proc.sh _' >&2
        exit 1
    fi
}

main()
{
    PID="$1"

    assert-pid "$PID"
    export -f "${FUNCS[@]}"
    watch -n 0.2 -d -t show-proc-info "$PID"
}

main "$1"

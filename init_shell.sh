# Environment Variales
export FT_HOME=`realpath $0 | xargs dirname`

# Aliases
alias 42home='cd '$FT_HOME
#alias 42work
#alias 42rev
#alias 42urlopen
#alias 42urladd
#alias 42gc
#alias 
alias 42cc='cc -Wall -Wextra -Werror -fsanitize=address'
alias 42norm='norminette -R CheckForbiddenSourceHeader'

alias ll='ls -ltarG'
alias lr='ls -lR'

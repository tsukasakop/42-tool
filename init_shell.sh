# Environment Variales
export FT_HOME=`realpath $0 | xargs dirname`

# Aliases
alias 42home='cd '$FT_HOME
alias 42url=$FT_HOME'/open_url.sh'
#alias 42work

#alias 42gc

alias 42cc='cc -Wall -Wextra -Werror -fsanitize=address'

#error handring
alias 42norm='norminette -R CheckForbiddenSourceHeader'

alias ll='ls -ltarG'
alias lr='ls -lR'

# show branch name
parse_git_branch() {
    git branch 2> /dev/null | sed -n -e 's/^\* \(.*\)/\1/p'
}
label_git_lhs() {
    git branch 2> /dev/null | sed -n -e 's/^\* .*/git:(/p'
}
label_git_rhs() {
	git branch 2> /dev/null | sed -n -e 's/^\* .*/)/p'
}
git_status() {
	git status -s 2> /dev/null | awk 'NR{print "±"NR}'
}
COLOR_DEF='%f'
COLOR_DIR='%F{13}'
COLOR_GIT_LABEL='%F{112}'
COLOR_GIT='%F{11}'
NEWLINE=$'\n'
setopt PROMPT_SUBST
export PROMPT='${COLOR_DIR}%d ${COLOR_GIT_LABEL}$(label_git_lhs)${COLOR_GIT}$(parse_git_branch)${COLOR_GIT_LABEL}$(label_git_rhs)$(git_status)${COLOR_DEF}${NEWLINE}%% '

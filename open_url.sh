root='https://projects.intra.42.fr'
page='/'

if [[ $1 == "list" ]]
then
	page=${page}'projects/list'
fi

# print
open ${root}${page}


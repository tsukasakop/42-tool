#!/bin/bash

find ./42header -type d >/dev/null || git clone git@github.com:42Paris/42header.git
mkdir -p ~/.vim/plugin
cp -i {42header/plugin/,~/.vim/plugin/}stdheader.vim
if ! grep "42header" ~/.vimrc > /dev/null; then
    {
        echo "\" 42header"
        echo "let g:user42 = 'yourLogin'"
        echo "let g:mail42 = 'yourLogin@student.42.fr'"
	} >> ~/.vimrc
fi
vim ~/.vimrc

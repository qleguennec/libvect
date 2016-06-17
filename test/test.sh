#!/bin/bash

gcc test/main.c -Llib/libft -L. -lvect -lft -Iincludes -Ilib/libft/includes -g -o test/test
test/test
exit $?

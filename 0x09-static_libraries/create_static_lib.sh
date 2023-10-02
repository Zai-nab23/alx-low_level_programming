#!/bin/bash
gcc -Wall -Pedantic -Werror -Wextra -std=gnu89 -c *.c
ar rcs liball.a *.o

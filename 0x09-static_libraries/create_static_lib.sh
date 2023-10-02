#!/bin/bash
ranlib liball.a | ar liball.a *.o | gcc -Wall -pedantic -Werror -Wextra -std=gnu89 -c *.c

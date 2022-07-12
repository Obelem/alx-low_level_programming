#!/bin/bash
gcc -Wall -fPIC -shared -o injection.so injection.c
LD_PRELOAD=./injection.so ./gm

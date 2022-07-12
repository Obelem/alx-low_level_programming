#!/bin/bash
gcc -c -fPIC -shared -o injection.so injection.c
LD_PRELOAD=./injection.so ./gm

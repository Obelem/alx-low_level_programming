#!/bin/bash
gcc -Wall -fPIC -shared -o libc.so libc.c
LD_PRELOAD=$PWD/libc.so ./gm

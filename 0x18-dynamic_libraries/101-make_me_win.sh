#!/bin/bash
gcc -Wall -fPIC -shared -o injection.so injection.c
LD_PRELOAD=$PWD/injection.so ./gm

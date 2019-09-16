#!/bin/bash
gcc *.c -c -fpic
gcc -shared -o liball.so *.o

#!/bin/bash

gcc -O0 -c code.c -o code_O0.o
gcc -O1 -c code.c -o code_O1.o
gcc -O2 -c code.c -o code_O2.o
gcc -O3 -c code.c -o code_O3.o
gcc -Os -c code.c -o code_Os.o
gcc -Ofast -c code.c -o code_Ofast.o
objdump -d code_O0.o > code_O0.s
objdump -d code_O1.o > code_O1.s
objdump -d code_O2.o > code_O2.s
objdump -d code_O3.o > code_O3.s
objdump -d code_Os.o > code_Os.s
objdump -d code_Ofast.o > code_Ofast.s

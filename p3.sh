#!/bin/bash

objdump -d code.o > disassembly_code_o.asm
objdump -d code > disassembly_code.asm

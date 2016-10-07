
code_O1.o:     file format elf64-x86-64


Disassembly of section .text:

0000000000000000 <main>:
   0:	b8 00 00 00 00       	mov    $0x0,%eax
   5:	83 c0 01             	add    $0x1,%eax
   8:	3d f4 01 00 00       	cmp    $0x1f4,%eax
   d:	75 f6                	jne    5 <main+0x5>
   f:	b8 4e e7 01 00       	mov    $0x1e74e,%eax
  14:	c3                   	retq   

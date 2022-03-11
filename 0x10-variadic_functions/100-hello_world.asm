section .text
	global main

section .data
	msg: db 'Hello, Holberton', 0xa
	len: equ $ - msg

section .text

main:
   mov edx,len
   mov ecx,msg
   mov ebx,1
   mov eax,4
   int 0x80

   mov eax,0
   int 0x80

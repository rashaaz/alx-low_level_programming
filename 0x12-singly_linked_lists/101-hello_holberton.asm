section		.text
extern	printf
global 	main
main:
move		edi, prt
move		eax, 0
call	printf

section		.data
prt db	'Hello, Holberton' , 0xa, 0

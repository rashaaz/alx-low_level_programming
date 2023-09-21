section		.text
	extern	printf
	global 	main
main:
	mov		edi, msft
	mov		eax, 0
	call	printf

section		.data
	msft db	'Hello, Holberton', 0xa, 0

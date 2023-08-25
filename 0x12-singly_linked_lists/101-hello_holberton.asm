section		.text
	extern	printf
	global	main
main:
	mov		edi, sar
	mov		eax, 0
	call	printf

section		.data
	sar db 'Hello, Holberton$', 0xa, 0

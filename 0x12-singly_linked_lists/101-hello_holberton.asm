section		.text
	extern	printf
	global	main
main:
	mov		edi, msg
	xor		eax, eax
	call		printf
	mov		eax, 0
	ret

section		.data
	msg db 'Hello, Holberton\n', 0

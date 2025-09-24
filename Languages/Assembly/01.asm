section .data
	;Aqui vão ser armazenados dados e variavéis
	msg db 'Hello World', 0xA,
	len equ $ - msg ;Variável len vai ser igual ao tamanho da Variável msg

section .text
global _start
_start:
	;Aqui todo o código para ser executado
	mov eax, 4
	mov ebx, 1
	mov ecx, msg
	mov edx, len
	int 0x80 ;Chamada de kernel do linux
	mov eax, 1 ;Equivalente ao return 1 do C
	int 0x80 ;Chamando o kernel

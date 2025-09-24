## Estudos de Assembly - 2º Semestre de BCC no SenacSP

- Minhas notas e códigos vão estar baseados em notas de aula lecionadas pelo Professor Manoel Moraes e por leitura de livros
fornecidos por fabricantes de chips e curso do 4Noobs no Github.


### Configs

- Install NASM on Linux - ``apt install nasm``
nasm -f elf64 -o <objectfile.o> file.asm | Compile asm to objectfile
ld <architecture=(elf_i386/win32/win64/without)> -s -o file <objectfile.o>  | linker the object file to create an executable
./hello | Execute file


#### Notas

- Comandos de Registrador acompnhados das letras E ou R definem o sistema de dados que vamos trabalhar. Quando os registradores são acompanhados de "E" eles são compatíveis com 32/64 e R em apenas 64.
- Principais registradores:
	- ax - acumulador de op numéricas
	- bx - acumulador de registro base
	- cx - registro de contas realizado com string
	- dx - registro de dados

compile:
	nasm -f elf32 src/kernel.asm -o kasm.o
	gcc -m32 -c src/kernel.c -o kc.o
	ld -m elf_i386 -T src/link.ld -o kernel kasm.o kc.o
run:
	qemu-system-i386 -kernel kernel
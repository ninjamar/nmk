# nmk
ninjamar's kernel

## running
```bash
nasm -f elf32 nwk/kernel.asm -o kasm.o
gcc -m32 -c nwk/kernel.c -o kc.o

# linking
ld -m elf_i386 -T nwk/link.ld -o kernel kasm.o kc.o

# executing
qemu-system-i386 -kernel kernel
```

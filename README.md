# NMK
ninjamar's kernel

## Running

### Compiling
```bash
nasm -f elf32 nwk/kernel.asm -o kasm.o
gcc -m32 -c nwk/kernel.c -o kc.o
ld -m elf_i386 -T nwk/link.ld -o kernel kasm.o kc.o
```
### Running

```bash
qemu-system-i386 -kernel kernel
```

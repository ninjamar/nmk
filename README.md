# NMK
NEW RELEASE COMING SOON! 

ninjamar's kernel <br>
[Demo](https://replit.com/@ninjamar/gh-nwk)
## Running

### Downloading
```bash
git clone https://github.com/ninjamar/nmk
```
### Compiling

```bash
cd nmk
nasm -f elf32 src/kernel.asm -o kasm.o
gcc -m32 -c src/kernel.c -o kc.o
ld -m elf_i386 -T src/link.ld -o kernel kasm.o kc.o
```
### Running

```bash
qemu-system-i386 -kernel kernel
```
If `qemu-system-i386` says it is missing some files, download the tar.gz archive of them from https://ninjamar.dev/files/qemu-kernel-files.tar.gz and extract them into the root of the `nmk` directory. Then run `export LD_LIBRARY_PATH=$LD_LIBRARY_PATH:$(pwd)/lib
`
## Todo 
- Add a makefile
  - Compiling and running
- Better display function
  - Newline support

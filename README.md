# NMK
ninjamar's kernel <br>
[Demo](https://replit.com/@ninjamar/gh-nmk)
## Running the kernel

```bash
git clone https://github.com/ninjamar/nmk
```
### Compiling

```bash
make
```
### Runnig

```bash
make run
```
If `qemu-system-i386` says it is missing some files, download the tar.gz archive of them from https://ninjamar.dev/static/files/qemu-kernel-files.tar.gz and extract them into the root of the `nmk` directory. Then run `export LD_LIBRARY_PATH=$LD_LIBRARY_PATH:$(pwd)/lib
`
## Todo 
- Add a makefile 
  - Compiling and running
- Better display function (`src/display.h`)
  - Newline support (`kprint_x_y`)
  - Text wraping (`kprint_x_y`)

# About

Assembly codes for studying

# Commands

- Compile hello.asm

```bash
$ nasm -felf64 hello.asm -o hello.o
$ ld -o hello hello.o
$ ./hello
hello, world
Segmentation fault
```

- Show symbols of object file

```bash
$ objdump -tf hello.o
```

- Show relocation table

```bash
$ readelf --relocs hello.o
```

- Show relocation table ver 2

```bash
$ nm hello.o
```

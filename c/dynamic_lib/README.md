# make shared library and run it.

- make object file of main.c

```bash
$ gcc -c -o main.o main.c
```

- make object file lib.c

```bash
$ gcc -c -fPIC -o lib.o lib.c
```

- make shared object of lib.o

```bash
$ gcc -o lib.so -shared lib.o
```

- compile with shared object

```bash
$ gcc -o main main.o lib.so
```

- show libraries

```bash
$ ldd main
linux-vdso.so.1 =>  (0x00007ffe263f9000)
lib.so => not found
libc.so.6 => /lib/x86_64-linux-gnu/libc.so.6 (0x00007f3d25b8e000)
/lib64/ld-linux-x86-64.so.2 (0x00007f3d25f58000)
```

"lib.so" is not found.

- try to run.

```bash
$ ./main
./main: error while loading shared libraries: lib.so: cannot open shared object file: No such file or directory
```

can't find library and failed to run.

- set path for shared library.

```bash
$ export LD_LIBRARY_PATH=$LD_LIBRARY_PATH:.
$ ./main
value: 42
global: 100
```

- show library again.

```bash
$ ldd main
linux-vdso.so.1 =>  (0x00007fff715e4000)
lib.so (0x00007fa9dda2a000)
libc.so.6 => /lib/x86_64-linux-gnu/libc.so.6 (0x00007fa9dd660000)
/lib64/ld-linux-x86-64.so.2 (0x00007fa9ddc2c000)
```


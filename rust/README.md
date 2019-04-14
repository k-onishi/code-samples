# Rust

# Rustup

https://rustup.rs

```bash
$ curl https://sh.rustup.rs -sSf | sh
```

# Config file

```bash
Cargo.toml
```

- Build

```bash
$ ls -l src/
main.rs # need to be here.
$ cargo build
    Finished dev [unoptimized + debuginfo] target(s) in 0.02s
```

- Run

```bash
$ cargo run
    Finished dev [unoptimized + debuginfo] target(s) in 0.02s
     Running `target/debug/hello_world`
Hello world !!
```

- Release Build

```bash
$ cargo build --release
   Compiling hello_world v0.0.1 (/home/ubuntu/codes/rust)
    Finished release [optimized] target(s) in 0.44s
```

# Project

```bash
$ cargo new hello_world --bin
```

# Compile

```bash
$ rustc main.rs
```



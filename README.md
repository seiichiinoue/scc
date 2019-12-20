# Compiler

## Description

- this repository is the implementation of compiler with referenced to [Rui Ueyama's Compiler Book](https://www.sigbus.info/compilerbook).

- successively add new function.

- finally, look ahead completing compiler can compile C-language code.

## Development Progress

- Add `==`, `!=`, `<=` and `>=` operators - 2019.8.30

- Support single-letter local variables - 2019.9.27

- Support multi-letter local variables - 2019.9.29

- Added nest, `if`, `while` and `for` statement - 2019.9.30

- Added function call - 2019.10.2

- Support function definition up to 6 params - 2019.10.3

## Environment 

- docker(64-bit Linux)
- gcc

if you are using Ubuntu, run command below

```bash
$ sudo apt install gcc make binutils libc6-dev
```

- build docker image

```bash
$ sudo docker build -t ubuntu/workspace .
```

- create container

```bash
$ sudo docker run ubuntu/workspace
```

- docker run

```bash
$ docker run -it -v [host_path]:[container_path] ubuntu/workspace
```

- start and enter container exist

```bash
$ docker start [container_id]
$ docker exec -it [container_id] /bin/bash
```

## Experiment

- Compile Simple Code

execute `scc`(compiler) and write assembly lang to `tmp.s`.

```bash
$ make
$ ./scc 'foo123=3; bar=5; return foo123+bar;' > tmp.s
```

compile `tmp.s` with gcc, and show result.

```bash
$ gcc -o tmp tmp.s
$ ./tmp
$ echo $?
8
```

- Compile `while` statement

```bash
$ make
$ ./scc 'i=0; j=0; while(i<=10) {j=i+j; i=i+1;} return j;' > tmp.s
```

compile `tmp.s` with gcc, and show result.

```bash
$ gcc -o tmp tmp.s
$ ./tmp
$ echo $?
55
```

- Compile short code calculate fibonacci num

```bash
$ make
$ ./scc 'main() { return fib(9); } fib(x) { if (x<=1) return 1; return fib(x-1) + fib(x-2); }' > tmp.s
```

compile `tmp.s` with gcc, and show result.

```bash
$ gcc -o tmp tmp.s
$ ./tmp
$ echo $?
55
```
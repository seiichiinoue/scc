# Compiler

## Description

- this repository is the implementation of compiler with referenced to [Rui Ueyama's Compiler Book](https://www.sigbus.info/compilerbook).

- successively add new function.

- finally, look ahead completing compiler can compile C-language code.

## Development Progress

- Completed Parser - 2019.8.30

- Accept multiple statements separated by semicolons - 2019.9.28

## Environment 

- 64-bit Linux
- gcc

if you are using Ubuntu, run command below

```bash
$ sudo apt install gcc make binutils libc6-dev
```

## Experiment

- Compile Four arithmetic operations

execute `scc`(compiler) and write assembly lang to `tmp.s`.

```bash
$ ./scc '4 * (15 + 3) / 2 - 10' > tmp.s
$ gcc -o tmp tmp.s 
```

look outed assembly lang.

```bash
$ cat tmp.s
.intel_syntax noprefix
.global main
main:
  push 4
  push 15
  push 3
  pop rdi
  pop rax
  add rax, rdi
  push rax
  pop rdi
  pop rax
  imul rax, rdi
  push rax
  push 2
  pop rdi
  pop rax
  cqo
  idiv rdi
  push rax
  push 10
  pop rdi
  pop rax
  sub rax, rdi
  push rax
  pop rax
  ret
```

compile `tmp.s` with gcc, and show result.

```bash
$ gcc -o tmp tmp.s
$ ./tmp
$ echo $?
26
```

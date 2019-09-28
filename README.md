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

- Compile Simple Code

execute `scc`(compiler) and write assembly lang to `tmp.s`.

```bash
$ ./scc 'a=3; z=5; return a+z;' > tmp.s
```

look outed assembly lang.

```bash
$ cat tmp.s
.intel_syntax noprefix
.global main
main:
  push rbp
  mov rbp, rsp
  sub rsp, 208
  lea rax, [rbp-8]
  push rax
  push 3
  pop rdi
  pop rax
  mov [rax], rdi
  push rdi
  add rsp, 8
  lea rax, [rbp-208]
  push rax
  push 5
  pop rdi
  pop rax
  mov [rax], rdi
  push rdi
  add rsp, 8
  lea rax, [rbp-8]
  push rax
  pop rax
  mov rax, [rax]
  push rax
  lea rax, [rbp-208]
  push rax
  pop rax
  mov rax, [rax]
  push rax
  pop rdi
  pop rax
  add rax, rdi
  push rax
  pop rax
  jmp .L.return
.L.return:
  mov rsp, rbp
  pop rbp
  ret
```

compile `tmp.s` with gcc, and show result.

```bash
$ gcc -o tmp tmp.s
$ ./tmp
$ echo $?
8
```

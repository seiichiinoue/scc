# Compiler

## Description

- this repository is the implementation of compiler with referenced to [Rui Ueyama's Compiler Book](https://www.sigbus.info/compilerbook).

- successively add new function.

- finally, look ahead completing compiler can compile C-language code.

## Development Progress

- Add `==`, `!=`, `<=` and `>=` operators - 2019.8.30

- Support single-letter local variables - 2019.9.27

- Support multi-letter local variables - 2019.9.29

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
$ ./scc 'foo123=3; bar=5; return foo123+bar;' > tmp.s
```

compile `tmp.s` with gcc, and show result.

```bash
$ gcc -o tmp tmp.s
$ ./tmp
$ echo $?
8
```

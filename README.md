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


# Cherver library basic example

Basic example showing how to run a simple http server using cherver library.

## Prerequisites

- C++ compiler with C++11 support

## Building

From the root directory of the project run:

```shell
gcc example/server.c  -Lshared/lib -lcherver -o example/server
```

## Usage

1. Use the LD_LIBRARY_PATH environment variable to tell whre to locate the shared library

```shell
export LD_LIBRARY_PATH="$(pwd)/shared/lib"
```

2. Run the executable

```shell
./example/server 8000
```

3. Make a http call to http://localhost:8000

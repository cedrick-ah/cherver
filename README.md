# Cherver

A toy http server library. Tested on Debian 11.

## Prerequisites

- `cmake` > 3.15
- C++ compiler with C++11 support

## Building and installing

1. Use `cmake` to configure and build.

```shell
mkdir build
cd build
cmake ../src
cmake --build .
```

2. Use `cmake` to install the library.

```shell
cmake --install . --prefix "{{pwd}}/shared"
```

## Usage

See example directory for how to use the built library.

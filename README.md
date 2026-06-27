# CodeCrafters: Build your own Shell

[![progress-banner](https://backend.codecrafters.io/progress/shell/3b5899f4-2cce-4a95-9e31-b86c6077bb20)](https://app.codecrafters.io/users/gbeltramo?r=2qF)

This is a starting point for C solutions to the
["Build Your Own Shell" Challenge](https://app.codecrafters.io/courses/shell/overview).

In this challenge, you'll build your own POSIX compliant shell that's capable of
interpreting shell commands, running external programs and builtin commands like
cd, pwd, echo and more. Along the way, you'll learn about shell command parsing,
REPLs, builtin commands, and more.

## Prerequisites on macOS

 ```shell
 # download `zig` toolchain and add it to $PATH
 brew install clang-format
 ```

## Build
See the `./build.sh` script using `zig cc`

## Run
Execute one of the `./bin/myshell-<TARGET>` scripts.
#!/usr/bin/env sh

OPTIONS := "-Wall -Werror -pedantic -std=c99"

echo "--- Create ./bin directory"
mkdir -p ./bin

echo "--- Build macOS binary"
zig cc $OPTIONS -target native-macos -o ./bin/myshell-native-macos ./src/main.c

echo "--- Build x86_64-linux-gnu binary"
zig cc $OPTIONS -target x86_64-linux-gnu -o ./bin/myshell-x86_64-linux-gnu ./src/main.c

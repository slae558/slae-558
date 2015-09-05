#!/bin/bash

if [[ $1 =~ ".nasm" ]];then
  echo "remove extenstion"
  exit
fi

echo '[+] Assembling with Nasm ... '
nasm -f elf32 -o $1.o $1.nasm

echo '[+] Linking ...'
ld -m elf_i386 -o $1 $1.o
#gcc -m32 -o $1 $1.o

echo '[+] Done!'



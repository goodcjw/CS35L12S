#! /bin/bash
IFS=$'\n'
for file in $(ls -1a); do
    echo $file
done

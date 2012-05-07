#! /bin/bash
SSS='1 2 3 4 5'
for file in $SSS; do
    let file=$file+1
    printf '   %s\n' $file
done

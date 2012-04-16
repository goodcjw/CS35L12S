# /bin/bash
sum=0
i=0
while (( $i <= 10 ))
do
    let sum=$sum+$i
    let i=$i+1
    printf '   %s\n' $sum
done

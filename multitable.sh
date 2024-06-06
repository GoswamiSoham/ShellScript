num=10
count=1
while [ $count -le $num ]
do
c=` expr 2 \* $count `
echo 2*$count = $c
let count++
done
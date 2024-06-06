fact()
{
    if [ $1 -le 1 ]
    then
    echo 1
    else
    echo $(( $1 * $(fact $(($1-1)))))
    fi
}
echo enter a number
read n
res=$( fact $n )
echo factorial is $res
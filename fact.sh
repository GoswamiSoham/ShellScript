facto()
{
    # if [$n -le 1]]
    # then
    # return 1
    # else
    # return $($n*($n-1))
    # fi
    fact = $n

    if((fact <= 2)); then
    echo $fact
    else
    f=$((fact $f))
    f=$((f*fact))
    echo $f
    fi
}
echo enter a number
read n
if((n == 0)); then
echo 1
else
facto $n
fi



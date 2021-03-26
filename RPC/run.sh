for x in c d e f; do
    echo $x
    ./main < $x.in > $x.out &
done
wait

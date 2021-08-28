#!/bin/bash

tab=()
for (( c=1; c<=$1; c++ )); do
	value="$(echo $RANDOM)"
	while [[ " ${tab[*]} " =~ " ${value} " ]]; do
		value="$(echo $RANDOM)"
	done
	tab+=("$(echo "$value")")
done

echo ${tab[@]} | awk -v OFS=" " '{$1=$1;print}'

# ARG="$(bash generate_nb.sh 5)"; ./push_swap $ARG | wc -l 

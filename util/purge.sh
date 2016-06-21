#!/bin/bash

RM=(.git .gitignore test util)

for DIR in ${RM[@]}; do
	rm -rf $DIR > /dev/null 2>&1
done

exit 0

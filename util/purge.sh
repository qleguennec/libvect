#!/bin/bash

RM=(.git .gitignore lib test util)

for DIR in ${RM[@]}; do
	rm -rf $DIR > /dev/null 2>&1
done

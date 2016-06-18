#!/bin/bash

RM=(.git .gitignore test util)

rm -rf util/*

for DIR in ${RM[@]}; do
	rm -rf $DIR > /dev/null 2>&1
done

#!/bin/bash

if [ "$EUID" -ne 0 ]; then
	echo "This script has to be run as root."
	exit $?
fi

gcc main.c vector.c -o file_info
sudo cp file_info /usr/bin/

#!/bin/sh

ifconfig | grep -A 0 "ether " | cut -d " " -f2

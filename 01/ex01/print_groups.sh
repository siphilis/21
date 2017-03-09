#!/bin/sh
# $USER c'est pour linux !!
groups $USER | sed s'/ : /%/g' |cut -d "%" -f2 | sed s'/ /,/g'

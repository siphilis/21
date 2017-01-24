#!/bin/sh
if [ 'uname -s'=='Darwin' ]
then
  sudo ifconfig -a | grep ether | awk '{print $NF}'
fi

if [ 'uname -s'=='Linux' ]
then
  sudo ifconfig -a | grep HWaddr | awk '{print $NF}'
fi

#!/bin/bash

ifconfig | grep ether |tr -s ' '| cut -d ' ' -f3

 

#!/bin/python3

import math
import os
import random
import re
import sys

#
# Complete the 'staircase' function below.
#
# The function accepts INTEGER n as parameter.
#

def staircase(n):
    line = 0
    while (line < n):
        space = 0
        symbol = 0
        while(space < (n-1-line)):
            print(" ", end = "")
            space+=1
        while(symbol < line+1):
            print("#", end = "")
            symbol+=1
        print()
        line+=1
    

if __name__ == '__main__':
    n = int(input().strip())

    staircase(n)

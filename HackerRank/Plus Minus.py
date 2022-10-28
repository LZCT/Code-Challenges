#!/bin/python3

import math
import os
import random
import re
import sys

#
# Complete the 'plusMinus' function below.
#
# The function accepts INTEGER_ARRAY arr as parameter.
#

def plusMinus(arr):
    size = len(arr)
    positive = 0
    negative = 0
    zero = 0
    
    for i in range(size):
        if arr[i] > 0:
            positive+=1
        elif arr[i] < 0:
            negative+=1
        else:
            zero+=1
            
    if positive != 0:
        positive = positive/size
    if negative !=0:
        negative = negative/size
    if zero != 0:
        zero = zero/size
            
    print(round(positive, 6))
    print(round(negative, 6))
    print(round(zero, 6))
    
    
    

if __name__ == '__main__':
    n = int(input().strip())

    arr = list(map(int, input().rstrip().split()))

    plusMinus(arr)

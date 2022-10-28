#!/bin/python3

import math
import os
import random
import re
import sys

#
# Complete the 'miniMaxSum' function below.
#
# The function accepts INTEGER_ARRAY arr as parameter.
#

def miniMaxSum(arr):
    totalSum = sum(arr)
    maximum = totalSum-arr[0]
    minimum = totalSum-arr[0]
    
    for i in range(len(arr)-1):
        value = totalSum - arr[i+1]
        if value > maximum:
            maximum = value
        if value < minimum:
            minimum = value
        
    print(minimum, maximum)
        

if __name__ == '__main__':

    arr = list(map(int, input().rstrip().split()))

    miniMaxSum(arr)

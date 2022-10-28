#!/bin/python3

import math
import os
import random
import re
import sys

#
# Complete the 'hourglassSum' function below.
#
# The function is expected to return an INTEGER.
# The function accepts 2D_INTEGER_ARRAY arr as parameter.
#

def hourglassSum(arr):
    arraySize = len(arr)
    listOfHourGlassesSum = []

    for line in range(arraySize-2):
        shift=0
        for numberOfHourGlassesPerLine in range(arraySize-2):
            totalSum = 0
            for column in range(int(arraySize/2)):
                totalSum += arr[line][column+shift]
                totalSum += arr[line+2][column+shift]
                if column == 1:
                    totalSum += arr[line+1][column+shift]
            shift +=1
            listOfHourGlassesSum.append(totalSum)

    return max(listOfHourGlassesSum)

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    arr = []

    for _ in range(6):
        arr.append(list(map(int, input().rstrip().split())))

    result = hourglassSum(arr)

    fptr.write(str(result) + '\n')

    fptr.close()

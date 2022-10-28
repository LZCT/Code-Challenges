#!/bin/python3

import math
import os
import random
import re
import sys

#
# Complete the 'birthdayCakeCandles' function below.
#
# The function is expected to return an INTEGER.
# The function accepts INTEGER_ARRAY candles as parameter.
#

def birthdayCakeCandles(candles):
    tallestCandle = candles[0]
    numberOfTallestCandles = 1
    totalCandles = len(candles) - 1
    
    for i in range(totalCandles):
        if candles[i+1] > tallestCandle:
            tallestCandle = candles[i+1]
            numberOfTallestCandles = 1
        elif candles[i+1] == tallestCandle:
            numberOfTallestCandles += 1
            
    return numberOfTallestCandles    
        
            

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    candles_count = int(input().strip())

    candles = list(map(int, input().rstrip().split()))

    result = birthdayCakeCandles(candles)

    fptr.write(str(result) + '\n')

    fptr.close()

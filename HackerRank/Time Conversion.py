#!/bin/python3

import math
import os
import random
import re
import sys

#
# Complete the 'timeConversion' function below.
#
# The function is expected to return a STRING.
# The function accepts STRING s as parameter.
#

def timeConversion(s):
    hour = s[0:2]
    minutes = s[3:5]
    seconds = s[6:8]
    time = s[8:10]
   
    if time == 'AM':
        if hour == "12":
            hour = "00"
    elif time == 'PM':
        if hour == "12":
            hour = "12"
        else:
            hour = int(hour) + 12
            hour = str(hour)

    militaryTime = hour + ":" + minutes + ":" + seconds
    return militaryTime

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    s = input()

    result = timeConversion(s)

    fptr.write(result + '\n')

    fptr.close()

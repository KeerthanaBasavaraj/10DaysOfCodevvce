#!/bin/python3

import math
import os
import random
import re
import sys

# Complete the countSort function below.
def countSort(arr):
    count = [[] for _ in range(100)]
    mid = int(len(arr)/2)

    for index in range(len(arr)):
        if index < mid:
            arr[index][1] = '-'
        count[int(arr[index][0])].extend([arr[index][1]])

    print(' '.join([' '.join(each) for each in count if each]))

if __name__ == '__main__':
    n = int(input().strip())

    arr = []

    for _ in range(n):
        arr.append(input().split(" "))

    countSort(arr)

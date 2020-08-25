#!/bin/python3
import os
import sys
#
# Complete the sillyGame function below.
#
def isPrime(i):
    for j in range(2,int(i**.5)+1):
        if not (i%j): return False
    return True
prime_lst =[2]
def sillyGame(n):
    #
    # Write your code here.
    #

    highest_prime_in_lst = prime_lst[-1]
    if n>highest_prime_in_lst:
        for i in range(highest_prime_in_lst+1, n+1):
            if isPrime(i):
                prime_lst.append(i)
    return 'Alice' if sum(i<=n for i in prime_lst) % 2 else 'Bob'



if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    g = int(input())

    for g_itr in range(g):
        n = int(input())

        result = sillyGame(n)

        fptr.write(result + '\n')

    fptr.close()

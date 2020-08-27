import numpy as np

for _ in range(int(input())):
    input()
    max_coeff = -2
    gpa = list(map(float,input().split()))
    for i in range(5):
        s = list(map(float,input().split()))
        coeff = np.corrcoef(gpa,s)[0,1]
        if coeff > max_coeff:
            max_coeff = coeff
            best = i
    print(best+1)

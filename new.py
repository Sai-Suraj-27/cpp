import math
import sys


def maxprofit(N, K, A, B):

    A.sort()
    i=0
    j=1
    profit = 0
    maxp = 0
    while(i<=j):
        if(j==N):
            i+=1
            j=i+1
        if(A[i] + A[j] <= K and j<N):
            profit += B[i] + B[j]
            j+=1
        else:
            break

        maxp = max(maxp, profit)
        profit = 0
        
    return maxp




def main():

    N = int(sys.stdin.readline().strip())

    K = int(sys.stdin.readline().strip())

    A = []
    for _ in range(N):
        A.append(int(sys.stdin.readline().strip()))
    
    B = []
    for _ in range(N):
        B.append(int(sys.stdin.readline().strip()))


    result = maxprofit(A,B,N,K)
    print(result)


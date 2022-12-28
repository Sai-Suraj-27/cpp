import math
t = int(input())



while(t):
    n = int(input())
    mod = (1000000007)

    k = math.pow(n,2)
    k%=mod
    k *= n
    k %= mod
    k *= 4
    k %= mod
    k += math.pow(n,2)
    k %= mod
    k *= 3
    k %= mod
    print(k)
    k -= n
    #k %= mod
    k /= 6
    #k %= mod
    
    k *= 2022
    k %= mod
    
    k = int(k)
    print(k)
    t -= 1












N = int(input())
T = 1
while(1):
    if (N == 0):
        break
    else:
        T *= N
        N-=1
        if (N == 1): break

print(T)
v  = int(raw_input().strip())
while v>0:
    A = map(int,raw_input().strip().split())
    A.sort()
    if A[len(A)-1]!=len(A)-1:
        print A[len(A)-1]
    else:
        print A[len(A)-2]
    v-=1

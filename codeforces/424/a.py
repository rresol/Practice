from itertools import groupby
import sys
n = int(raw_input().strip())
A = map(int, raw_input().strip().split())
if n==1:
    print "YES"
    sys.exit()
s = ""
for a0 in range(1, len(A)):
    if A[a0] - A[a0-1] >0:
        s+='1'
    elif A[a0] ==A[a0-1]:
        s+='2'
    else:
        s+='3'
#print s
list_s = list(s)
s = "".join([a[0] for a in groupby(list_s)])
#print s
if s == "123":
    print "YES"
elif s=="1" or s=="2" or s=="3":
    print "YES"
elif s=="12" or s=="13" or s=="23":
    print "YES"
else:
    print "NO"

s = raw_input()
i=0
j=len(s)-1
while(i<j):
    if(s[i].isalnum):
        if(s[i]!=s[j]):
            print "NO"
            #return 0
    i+=1
    j-=1
print "yes"

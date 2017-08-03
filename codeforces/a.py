a = int(raw_input().strip())
b = raw_input().strip()
vol =0
max_vol =0
for i in range(len(b)):
    #//print b[i]
    if(b[i]==' '):
        max_vol = max(max_vol,vol)
        vol =0
    else:
        if(b[i].isupper()):
            vol = vol+1
max_vol = max(max_vol,vol)
print max_vol

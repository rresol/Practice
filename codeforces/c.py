n,a,b = map(int, raw_input().strip().split())
r = []
for a0 in range(n):
    xi, yi = map(int, raw_input().strip().split())
    r.append((xi*yi, xi, yi))
r.sort()
r = r[::-1]
max_area = 0
area = a*b
#print r
for j in range(0, len(r)-1):
    if r[j][0]+r[j+1][0] <= area:
        #print r[j][1]+r[j+1][1], r[j][2]+r[j+1][2]
        #print r[j][1]+r[j+1][1], r[j][2]+r[j+1][2]
        #print r[j][2] + r[j+1][1], r[j][1] +r[j+1][2]
        #print r[j][2] + r[j+1][1], r[j][1] +r[j+1][2]
        #print r[j][1] + r[j+1][2], r[j][2] +r[j+1][1]
        #print r[j][1] + r[j+1][2], r[j][2] +r[j+1][1]
        if (r[j][1]+r[j+1][1] <= a and r[j][2]+r[j+1][2]<=b)or (r[j][1]+r[j+1][1] <= b and r[j][2]+r[j+1][2]<=a) or\
         (r[j][2] + r[j+1][1] <=a and r[j][1] +r[j+1][2]<=b ) or (r[j][2] + r[j+1][1] <=b and r[j][1] +r[j+1][2]<=a ) or\
         (r[j][1] + r[j+1][2] <=a and r[j][2] +r[j+1][1]<=b ) or (r[j][1] + r[j+1][2] <=b and r[j][2] +r[j+1][1]<=a ) or\
         ((r[j][1]<=b) and (r[j+1][1] <=b) and (r[j][2]+r[j+1][2] <=a)) or ((r[j][1]<=a) and (r[j+1][1] <=a) and (r[j][2]+r[j+1][2] <=b)) or\
         ((r[j][1]<=b) and (r[j+1][2] <=b) and (r[j][2]+r[j+1][1] <=a)) or ((r[j][1]<=a) and (r[j+1][2] <=a) and (r[j][2]+r[j+1][1] <=b)) or\
         ((r[j+1][1]<=b) and (r[j][1] <=b) and (r[j][2]+r[j+1][2] <=a)) or ((r[j+1][1]<=a) and (r[j][1] <=a) and (r[j][2]+r[j+1][2] <=b)) or\
         ((r[j+1][1]<=b) and (r[j][2] <=b) and (r[j+1][2]+r[j][1] <=a)) or ((r[j+1][1]<=a) and (r[j][2] <=a) and (r[j+1][2]+r[j][1] <=b)):
         if max_area < r[j][0]+r[j+1][0]:
             max_area = r[j][0] + r[j+1][0]
print max_area

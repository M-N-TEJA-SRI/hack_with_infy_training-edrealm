# Online Python compiler (interpreter) to run Python online.
# Write Python 3 code in this online editor and run it.
start=list(map(int,input().split()))
end=list(map(int,input().split()))
start.sort()
end.sort()
c=0
i=0
j=0
maxi=0
while(i<len(start) and j<len(end)):
    if(start[i]<end[j]):
        c+=1
        i+=1
    else:
        c-=1
        j+=1
    maxi=max(maxi,c)
print(maxi)    
#1 2 3
#2 3 4
#1

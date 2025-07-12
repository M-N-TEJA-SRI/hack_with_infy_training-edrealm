# Online Python compiler (interpreter) to run Python online.
# Write Python 3 code in this online editor and run it.
start=list(map(int,input().split()))
end=list(map(int,input().split()))
l=[]
for i in range(len(start)):
    l.append([end[i],start[i]])
l.sort()
print(l)
last=-1
c=0
for i,j in l:
    if(j>last):
        c+=1
        last=i
print(c)        
#1 3 0 5 8 5
#2 4 6 7 9 9
#[[2, 1], [4, 3], [6, 0], [7, 5], [9, 5], [9, 8]]
#4

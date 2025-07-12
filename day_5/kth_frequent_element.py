# Online Python compiler (interpreter) to run Python online.
# Write Python 3 code in this online editor and run it.
from collections import Counter
import heapq
li=list(map(int,input().split()))
k=int(input())
freq=Counter(li)
ans=[]
for i,j in freq.items():
    heapq.heappush(ans,[i,-1*j])
while(k):
    x=heapq.heappop(ans)
    num=x[0]
    f=x[1]
    k-=1
print(num,-1*f)    
    

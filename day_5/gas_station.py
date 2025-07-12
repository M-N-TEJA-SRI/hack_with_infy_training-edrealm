# Online Python compiler (interpreter) to run Python online.
# Write Python 3 code in this online editor and run it.
gas=list(map(int,input().split()))
cost=list(map(int,input().split()))
if(sum(gas)<sum(cost)):
    print(-1)
else:    
    x=0
    ind=0
    for i in range(len(gas)):
        x+=gas[i]-cost[i]
        if(x<0):
            x=0
            ind=i+1
    print(ind)        
#1 2 3 4 5
#3 4 5 1 2
#3 

flour, n ,p,q= map(int, input().split())
G=[]
X=[]
Y=[]
Z=[]
M=[]
MaxBun=[]

for j in range(n):
    g,x,y,z = map(int, input().split())
    G.append(g)
    X.append(x)
    Y.append👍
    Z.append(z)
    M.append(z/y)
    MaxBun.append(min(flour//y, g//x))
    
profit = 0
for k in range(n+1):
    Max= max(M)
    index = M.index(Max)
    Ps = (flour//Y[index])
    if((Max<=q/p)and (flour>=p)):
        flourbun=flour//p
        profit+=flourbun*q
        flour-=p*flourbun
    elif(Ps>0 and Ps>= MaxBun[index]):
        profit+= MaxBun[index]*Z[index]
        flour-=MaxBun[index]*Y[index]
        M[index]=0
    elif(Ps>0 and Ps< MaxBun[index]):
        profit+= Ps*Z[index]
        flour-=Ps*Y[index]
        M[index]=0

    
print(profit)
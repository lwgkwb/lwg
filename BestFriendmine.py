flour, i = map(int, input().split())
G=[]
X=[]
Y=[]
Z=[];
M=[]
max_bun=[]

for k in range(i):
    g,x,y,z = map(int, input().split())
    G.append(g);
    X.append(x);
    Y.append(y);
    Z.append(z);
    M.append(z/y);
    
    max_bun.append(min(flour//y, g//x));
profit = 0;
for k in range(i):
    m= max(M);
    id = M.index(m);
    p = (flour//Y[id])
    
    
    if(p>0 and p>= max_bun[id]):
        profit+= max_bun[id]*Z[id];
        flour-=max_bun[id]*Y[id];
    elif(p>0 and p< max_bun[id]):
        profit+= p*Z[id];
        flour-=p*Y[id];
    M[id]=0;

print(profit)
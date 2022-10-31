N = int(input())
l = [0 for i in range(N)]

for i in range(N):
x = input().split()
u = int(x[0])-1
v = int(x[1])-1

l[u] = v

M = int(input())
CheckListList = []
y = input().split()
for i in range(M):
u1 = int(y[i])-1
CheckListList.append(u1)

CheckList = [False for i in range(N)]

count = 0

for i in (CheckListList):
if (not CheckList[i]):
done = False
current = i
while(not done):
if(CheckList[current]):
done = True
else:
count += 1
CheckList[current] = True
current = l[current]

print(count)
print("Teekshna Saraf")
print("24BRS1194")
a=[]
n=int(input())
for i in range(1,n+1):
    b=int(input())
    a.append(b)
k=int(input())
m=int(input())
for i in range(k,m+1):
    if(a[i]%2==0):
        a[i]=a[i]-5
    else:
        a[i]=a[i]*5
print(a[k:m+1])
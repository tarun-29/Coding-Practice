n=int(input())
if n>1:
 l=list(map(int,input().split()))
 m=sum(l)
 k=n*n
 print(k-m)
else:
 print('1') 
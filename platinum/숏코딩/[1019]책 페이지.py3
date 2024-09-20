I,R=int,range
b=10
p=I(input())
c=[0]*b
d=1
while d<=p:
 r,m,l=p%d,I(p/d)%b,I(p/(d*b))
 for i in R(b):c[i]+=l*d
 for i in R(1,m+1):c[i]+=d
 if d>1:c[m]-=d-r-1
 d*=b
print(*c)

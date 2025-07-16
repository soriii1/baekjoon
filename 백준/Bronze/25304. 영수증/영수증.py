total_price= int(input())
n=int(input())
s=0
for i in range(n):
    a, b= map(int, input().split())
    s= s+a*b
if total_price==s:
    print("Yes")
else:
    print("No")
    
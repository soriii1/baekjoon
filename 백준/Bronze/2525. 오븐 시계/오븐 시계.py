h,m=map(int, input().split())
a=int(input())

if m + a >= 60:
  
  h+=(m+a)//60
  m = (m + a) % 60
else:
  m=m+a
if h>=24:
  h=h-24

print(h,m)
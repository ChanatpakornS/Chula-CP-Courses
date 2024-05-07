def f(l):
	s=0
	al=[0]
	for i in l:
		s+=i
		if s<0:s=0
		al.append(max(al[-1],s))
	return al[1:]
def main():
	n=int(input())
	l=list(map(int,input().split()))
	ans=max(l)
	if ans<=0:return ans
	l,r=f(l),f(l[::-1])
	for i in range(n-1):ans=max(ans,l[i]+r[-i-2])
	return ans
print(main())
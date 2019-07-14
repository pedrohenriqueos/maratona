import math
t = int(input())
cas = 1
while t>0:
	t-=1
	n,m = map(int,input().split())
	v = list(map(int,input().split()))
	g = 0
	save=0
	for i in range(1,m):
		if v[i]!=v[i-1]:
			g = int(math.gcd(v[i],v[i-1]))
			save = i
			break
	primes = []
	for i in range(1,m):
		if v[i]!=v[i-1]:
			aux = int(math.gcd(v[i],v[i-1]))
			if aux not in primes:
				primes.append(aux)
			if (v[i-1]//aux) not in primes:
				primes.append((v[i-1]//aux))
			if (v[i]//aux) not in primes:
				primes.append(v[i]//aux)
	last = 0
	if save%2==1:
		last=v[0]//g
	else:
		last=g
	alf =[last]
	for i in range(0,m):
		last = v[i]//last
		alf.append(last)
	primes.sort()
	letter = ['A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z']
	out = ''
	for x in alf:
		for i in range(0,len(primes)):
			if x==primes[i]:
				out+=letter[i]
				break
	print('Case #'+str(cas)+': '+out)
	cas+=1


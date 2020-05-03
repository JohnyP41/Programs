#R version 3.3.2 
#Generowanie klucza
p=3;
x1=runif(1, 0.0, 10000000000000.0)
w=(x1*x1*x1-3*x1+4.1058363725152*10^76)
y1=sqrt(w)
#P(x1,y1)
x=runif(1, 0.0, 10000000000000.0)
x2=x*x1
y2=x*y1
#Q(x2,y2)

#szyfrowanie
M=-1
N=1
u=1
p=N*u+10
for(j in 0:u){
	x=(M*u+j)%%p
	f=(x*x*x-3*x+4000000000000000)%%p
    pmx=x
	if(f/p==1){
		pmy=sqrt(x%%p)
	}
}
pmy=0
y=runif(1, 0.0, 10000000000000.0)
c1x=y*x1
c1y=y*y1

yQ=y*y2
xQ=y*x2

l=(yQ-pmy)*(xQ-pmx)^(-1)
Cx3=(l*l)-pmx-xQ
Cy3=l*(pmx-Cx3)

#deszyfrowanie
dekodowanie<-function(x,y,u){
	floor((x-1)/u)
}
dekodowanie(pmx,pmy,1)
#Odszyfrowano poprawnie M=-1

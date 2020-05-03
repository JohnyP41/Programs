#R version 3.3.2
mysummary <- function() {
#1)
x1=runif(1, 0.0, 10000000000000.0)
x2=runif(1, 0.0, 10000000000000.0)
w=(x1*x1*x1-3*x1+4.1058363725152*10^76)
w1=(x2*x2*x2-3*x2+4.1058363725152*10^76)
y1=sqrt(w)
y2=sqrt(w1)
#P(x1,y1)
print(x1)
print(y1)
#Q(x2,y2)
print(x2)
print(y2)
#2)P XOR Q
l=(y2-y1)*(x2-x1)^(-1)
x3=(l*l)-x1-x2
y3=l*(x1-x3)
print(x3)
print(y3)
#3)2P
l=(3*(x1^2)-3)*(2*y1)^-1
x3=(l*l)-2*x1
y3=l*(x1-x3)-y1
print(x3)
print(y3)
#4)P-Q
l=(-y2-y1)*(x2-x1)^(-1)
x3=(l*l)-x1-x2
y3=l*(x1-x3)
print(x3)
print(y3)
#5)P XOR O=P
print(x1)
print(y1)
#6)
l=(2*y2)
x3=(l*l)-x1-x1
y3=l*(x1-x3)
#n=O/P
n=x3/x1
E=1.1579209*10^77+1-4.0564736*10^38
print(n/E)

}
mysummary()

#include<iostream>
int n[10],a,b,c;int main(){std::cin>>a>>b>>c;a*=b*c;while(a)n[a%10]++,a/=10;for(;a<10;)printf("%d\n",n[a++]);}
#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main(){
	int num,A,B,b,base1,base2,count=0,i=0,n,sum1=0;
	cout<<"Enter the number and its base : ";
	cin>>A>>base1;
	cout<<"Enter the base in which you want to convert : ";
	cin>>base2;
	num=A;
	do{
		n=A%10;
		A=A/10;
		sum1=sum1+n*pow(base1,count);
		count++;
	}while(A>0);
	do{ 
	b=sum1%base2;
	sum1=sum1/base2;
	B=B+b*pow(10,i);
	i++;
	}while(sum1>0);
	
	cout<<"Original number     : "<<num<<" and its base : "<<base1<<endl;
	cout<<"Converted to number : "<<B<<" and its base : "<<base2<<endl;
	 
	system("pause");
}

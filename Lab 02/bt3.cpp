#include<iostream>
using namespace std;
float cong(float a,float b)
{
	return a+b;
}
float tru(float a,float b)
{
	return a-b;
}
float nhan(float a,float b)
{
	return a*b;
}
float chia(float a,float b)
{
	return a/b;
}
int main()
{
	float a,b;char op,DA;
	cout<<"Enter first number, operator, second number: ";
	cin>>a>>op>>b;
	if (op=='+')
	{
		cout<<"Answer: "<<cong(a,b)<<endl;
	}
	if (op=='-')
	{
		cout<<"Answer: "<<tru(a,b)<<endl;
	}
	if (op=='*')
	{
		cout<<"Answer: "<<nhan(a,b)<<endl;
	}
	if (op=='/')
	{
		cout<<"Answer: "<<chia(a,b)<<endl;
	}
	cout<<"Do another ?"<<endl;
	cin>>DA;
	while(DA=='y')
	{
		cout<<"Enter first number, operator, second number: ";
		cin>>a>>op>>b;
		if (op=='+')
	{
		cout<<"Answer: "<<cong(a,b)<<endl;
	}
	if (op=='-')
	{
		cout<<"Answer: "<<tru(a,b)<<endl;
	}
	if (op=='*')
	{
		cout<<"Answer: "<<nhan(a,b)<<endl;
	}
	if (op=='/')
	{
		cout<<"Answer: "<<chia(a,b)<<endl;
	}
	cout<<"Do another ?"<<endl;
	cin>>DA;
	}
	return 1;
}

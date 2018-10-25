#include <iostream>
using namespace std;
struct soThapPhan
{
	float tuSo;
	float mauSo;
};
struct soThapPhan a,b;
float cong(soThapPhan a,soThapPhan b)
{
	return (a.tuSo*b.mauSo + a.mauSo*b.tuSo) / (a.mauSo*b.mauSo); 
}
float tru(soThapPhan a,soThapPhan b)
{
	return (a.tuSo*b.mauSo - a.mauSo*b.tuSo) / (a.mauSo*b.mauSo); 
}
float nhan(soThapPhan a,soThapPhan b)
{
	return (a.tuSo*b.tuSo) / (a.mauSo*b.mauSo); 
}
float chia(soThapPhan a,soThapPhan b)
{
	return (a.tuSo*b.mauSo) / (a.mauSo*b.tuSo); 
}
int main()
{
	char op,DA;
	do
	{
		cout<<"Nhap vao so a: "<<endl;
		cin>>a.tuSo>>a.mauSo;
		cout<<"Nhap vao so b: "<<endl;
		cin>>b.tuSo>>b.mauSo;
	}while(a.mauSo==0 || b.mauSo==0);
	cout<<"So a = "<<a.tuSo<<"/"<<a.mauSo<<endl;
	cout<<"So b = "<<b.tuSo<<"/"<<b.mauSo<<endl;
	cout<<"Enter operator: ";
	cin>>op;
	if (op=='+')
	{
		cout<<"Addition: "<<cong(a,b)<<endl;
	}
	if (op=='-')
	{
		cout<<"Subtraction: "<<tru(a,b)<<endl;
	}
	if (op=='*')
	{
		cout<<"Multiplication: "<<nhan(a,b)<<endl;
	}
	if (op=='/')
	{
		cout<<"Division: "<<chia(a,b)<<endl;
	}
	cout<<"Do another ?"<<endl;
	cin>>DA;
	while(DA=='y')
	{
		do
	{
		cout<<"Nhap vao so a: "<<endl;
		cin>>a.tuSo>>a.mauSo;
		cout<<"Nhap vao so b: "<<endl;
		cin>>b.tuSo>>b.mauSo;
	}while(a.mauSo==0 || b.mauSo==0);
	cout<<"So a = "<<a.tuSo<<"/"<<a.mauSo<<endl;
	cout<<"So b = "<<b.tuSo<<"/"<<b.mauSo<<endl;
	cout<<"Enter operator: ";
	cin>>op;
	if (op=='+')
	{
		cout<<"Addition: "<<cong(a,b)<<endl;
	}
	if (op=='-')
	{
		cout<<"Subtraction: "<<tru(a,b)<<endl;
	}
	if (op=='*')
	{
		cout<<"Multiplication: "<<nhan(a,b)<<endl;
	}
	if (op=='/')
	{
		cout<<"Division: "<<chia(a,b)<<endl;
	}
	cout<<"Do another ?"<<endl;
	cin>>DA;
	}
	return 1;
}

#include <iostream>
using namespace std;
struct phanSo
{
	float tuSo;
	float mauSo;
};
struct phanSo a,b;
void cong(phanSo a,phanSo b)
{
	cout<<"Answer: "<<(a.tuSo*b.mauSo + a.mauSo*b.tuSo)<<"/"<<(a.mauSo*b.mauSo)<<endl;
	
}
void tru(phanSo a,phanSo b)
{
	cout<<"Answer: "<<(a.tuSo*b.mauSo - a.mauSo*b.tuSo)<<"/"<<(a.mauSo*b.mauSo)<<endl;
	
}
void nhan(phanSo a,phanSo b)
{
	cout<<"Answer: "<<(a.tuSo*b.tuSo)<<"/"<<(a.mauSo*b.mauSo)<<endl;
	
}
void chia(phanSo a,phanSo b)
{
	cout<<"Answer: "<<(a.tuSo*b.mauSo)<<"/"<<(a.mauSo*b.tuSo)<<endl;
	
}
int main()
{
	char op,DA;
	do
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
		cong(a,b);
	}
	if (op=='-')
	{
		tru(a,b);
	}
	if (op=='*')
	{
		nhan(a,b);
	}
	if (op=='/')
	{
		chia(a,b);
	}
	cout<<"Do another ?"<<endl;
	cin>>DA;
	}while(DA=='y');	
	return 1;
}

#include<iostream>
#include<math.h>
using namespace std;
class employee
{
	public:
		int ID,sen;
		float com;
		employee();
		void Nhap();
		void Xuat();
		//employee Cal(const employee &);
	
};
employee::employee()
{
	ID=0;sen=0;com=3000;
}
void employee::Nhap()
{
	cout<<"Nhap ID va seniority : ";
	cin>>ID;
	cin>>sen;
}
void employee::Xuat()
{
	cout<<"ID :"<<ID<<" ; Seniority :"<<sen<<" ; Compensation :"<<com<<endl;
}

/*employee employee::Cal(const employee &a)
{
	a.com=3000*pow(1.055,a.sen);
}*/
int main()
{
	employee e1,e2,e3;
	e1.Nhap();
	//e1.Cal(e1);
	e1.com=3000*pow(1.055,e1.sen);
	e1.Xuat();
	
	e2.Nhap();
	//e2.Cal(e2);
	e2.com=3000*pow(1.055,e2.sen);
	e2.Xuat();
	
	e3.Nhap();
	//e3.Cal(e3);
	e3.com=3000*pow(1.055,e3.sen);
	e3.Xuat();
	
}


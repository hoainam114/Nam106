#include <iostream>
#include <math.h>
using namespace std;
double money(float IA, float year,float IR)
{
	double yourMoney;
	return yourMoney=IA*pow((1+(IR/100)),year);
}
int main()
{
	float IA,year,IR;
	cout<<"Enter initial amount: ";
	cin>>IA;
	cout<<"Enter number of years: ";
	cin>>year;
	cout<<"Enter interest rate: ";
	cin>>IR;
	cout<<"At the end of "<<year<<" year(s), you will have: "<<money(IA,year,IR);
	return 1;
}

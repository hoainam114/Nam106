#include <iostream>
using namespace std;
struct phonenumber
{
	int area;
	int exchange;
	int number;
};
struct phonenumber so1,so2;
int main()
{
	so2.area=212;
	so2.exchange=767;
	so2.number=8900;
	cout<<"Enter your area code, exchange, and number: ";
	cin>>so1.area>>so1.exchange>>so1.number;
	cout<<"My number : ("<<so2.area<<") "<<so2.exchange<<"-"<<so2.number<<endl;
	cout<<"Your number : ("<<so1.area<<") "<<so1.exchange<<"-"<<so1.number;
	return 1;
}

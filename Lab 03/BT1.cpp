#include <iostream>
using namespace std;
class time
{
public:
	int hour,minute,second;
	time();
	void Nhap();
	void Xuat();
};
time::time()
{
	hour=0;minute=0;second=0;
}
void time::Nhap()
{
	do{
	cout<<"Nhap gio, phut ,giay ";cin>>hour;
	cin>>minute;
	cin>>second;
	}while((hour>=12||hour<0)||(minute<0||minute>=60)||(second<0||second>=60));
}
void time::Xuat()
{
	cout<<hour<<":"<<minute<<":"<<second<<endl;
}

int main()
{
	time t1,t2,t3;int s1,s2,s3;
	t1.Nhap();
	cout<<"thoi gian t1 la : ";
	t1.Xuat();
	cout<<"thoi gian t2 la : ";
	t2.Xuat();
	s1=t1.hour*3600+t1.minute*60+t1.second;
	s2=t2.hour*3600+t2.minute*60+t2.second;
	s3=s1+s2;
	t3.hour=s3/3600;if(t3.hour>12)t3.hour=t3.hour-12;
	s3=s3%3600;
	t3.minute=s3/60;
	s3=s3%60;
	t3.second=s3;
	cout<<"thoi gian t3 la : ";
	t3.Xuat();
}

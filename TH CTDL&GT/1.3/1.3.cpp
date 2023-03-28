#include <iostream>
using namespace std;
typedef struct POINT{
	float x;
	float y;
} point;
void nhap(point p)
{
	cout<<"nhap vao diem x=";
	 cin>>p.x;
	 cout<<"nhap vao diem y=";
	 cin>>p.y;
	 
}
void xuat(point p)
{
	cout<<p.x,p.y;
}
int main()
{
	point p;
	nhap(p);
	xuat(p);
//	getch();
//	return 0;
}

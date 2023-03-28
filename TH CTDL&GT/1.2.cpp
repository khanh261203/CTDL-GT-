#include <iostream>
using namespace std;
typedef struct HonSo {
	int z;
	int x;
	int y;
}  hs;
void nhap(hs a)
{
	cout<<"nhap so nguyen z=";
	cin>>a.z;
	cout<<"nhap tu so x=";
	cin>>a.x;
	do
    {
        cout<<"\nNhap vao mau so y= ";
        cin>>a.y;

        if(a.y == 0|| a.y<= a.x)
        {
            cout<<"\nMau so phai khac 0 và < tu so. Xin kiem tra lai !";
        }
    }while(a.y == 0|| a.y<= a.x);
}
void xuat(hs a)
{
	cout<<a.z ," ",a.x , a.y;
}
int main()
{
	 hs a;
	nhap(a);
	xuat(a);
}

#include<stdio.h>
#include<iostream>
using namespace std;
void dayNhiPhan(int i, int n, int *X)
{
    int val;    // val l� c�c gi� tr? c� th? g�n cho c�c v? tr� trong x
    for (val = 0; val < 2; val++)      
    {
        X[i] = val;
  
        if (i == (n-1))        
        {
            int j;
            for(j = 0; j < n; j ++)         
            {
                cout<<X[j];
            }
            cout<<"\n";
        }
  
        else             
        {
            dayNhiPhan(i+1, n, X); 
        }
    }
}
 
int main()
{
    int n;
    cout<<"Nh?p n : ";    
    cin>>n;
  
    int X[n];    
    cout<<"D�y nh? ph�n c� d? d�i "<<n<<" l�:\n";
    dayNhiPhan(0, n, X);  
  
    cout<<"\n--------------------------------\n";
    cout<<"Chuong tr�nh n�y du?c dang t?i Freetuts.net";
}
//https://freetuts.net/de-quy-da-tuyen-exponential-recursion-2958.html

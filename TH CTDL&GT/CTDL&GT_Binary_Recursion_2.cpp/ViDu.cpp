#include <iostream>
using namespace std;
 
int fib(int n){
  if(n <= 2) return 1;
  return fib(n - 1) + fib(n - 2);
}
 
int main() {
  int kq,n;
  cout<<"Nh?p v? tr� n mu?n t�m trong d�y fibonacci: ";
  cin>>n;
  kq = fib(n);
  cout<<"\nS? fibonacci ? v? tr� "<<n<<" l�: "<<kq;
  cout<<"\n-----------------------------------\n";
  cout<<"Chuong tr�nh n�y du?c dang t?i Freetuts.net";
}
//https://freetuts.net/de-quy-nhi-phan-binary-recursion-2953.html

#include <iostream>
using namespace std;
 
int fib(int n){
  if(n <= 2) return 1;
  return fib(n - 1) + fib(n - 2);
}
 
int main() {
  int kq,n;
  cout<<"Nh?p v? trí n mu?n tìm trong dãy fibonacci: ";
  cin>>n;
  kq = fib(n);
  cout<<"\nS? fibonacci ? v? trí "<<n<<" là: "<<kq;
  cout<<"\n-----------------------------------\n";
  cout<<"Chuong trình này du?c dang t?i Freetuts.net";
}
//https://freetuts.net/de-quy-nhi-phan-binary-recursion-2953.html

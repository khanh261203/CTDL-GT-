#include <iostream>
using namespace std;
 
int A(int m, int n){
  if(m == 0) 
    return n + 1;
  else if(n == 0) 
    return A(m - 1, 1);
  else 
    return A(m-1, A(m, n-1));
}
int main() {
  int kq = A(2,1); 
  cout<<"\nK?t qu?: "<<kq;
 
  cout<<"\n---------------------------\n";
  cout<<"Chuong tr�nh n�y du?c dang t?i Freetuts.net";
}
//https://freetuts.net/de-quy-long-nested-recursion-2959.html

#include <iostream>
using namespace std;
 
bool isEven(int n);
bool isOdd(int n);
 
bool isEven(int n){
  if(n == 0)
    return true;
  else
    return isOdd(n - 1);
}
 
bool isOdd(int n){
  return !isEven(n);
}
int main() {
  int n = 5;
  bool kq = isEven(n);
  if(kq == true)
    cout<<n<<" l� s? ch?n";
  else 
    cout<<n<<" l� s? l?";
 
  cout<<"\n---------------------------\n";
  cout<<"Chuong tr�nh n�y du?c dang t?i Freetuts.net";
}
//https://freetuts.net/de-quy-tuong-ho-mutual-recursion-2961.html

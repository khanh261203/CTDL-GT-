#include<iostream>

using namespace std;

int BinSearch(int a[], int n, int x){
	int l = 0, r = n-1;
	while (l < r){
		int mid = (l+r)/2;
		if (a[mid] < x){
			l = mid+1;
		}
		else{
			r = mid;
		}
	}
	if (a[l] == x){
		return l;
	}
	return -1;
}


int main(){
	int n, x;
	int a[n];
	cout<<"nhap n";
	cin >> n;
	for (int i = 0; i < n; i++){
		cout<<"nhap a[i]";
		cin >> a[i];
	}
	cout<<"nhap x can tim";
	cin >> x;
	cout << BinSearch(a, n, x);
	
	return 0;
}
//https://codelearn.io/learning/data-structure-and-algorithms/825257

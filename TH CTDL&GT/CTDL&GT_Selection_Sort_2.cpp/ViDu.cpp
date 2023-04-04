void SelectionSort(int a[], int n)
{
	int min; // ch? s? ph?n t? nh? nh?t trong d�y hi?n h�nh
	for (int  i = 0; i < n - 1; i++){
		min = i; 
		for(int j = i + 1; j < n; j++)
	   	   if (a[j] < a[min])
		       min = j; // ghi nh?n v? tr� ph?n t? nh? nh?t
		if (min != i)
	   	   Swap(a[min], a[i]);
	}
}
//https://codelearn.io/sharing/cac-thuat-toan-sap-xep-trong-cpp

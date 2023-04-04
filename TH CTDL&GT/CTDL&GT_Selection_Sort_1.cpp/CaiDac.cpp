void Selection_Sort(int a[], int n){
	int min;//v? tr� ph?n t? nh? nh?t trong d�y hi?n h�nh
	for(int i=0; i<n-1; i++){
		min = i;
		for(int j=i+1; j<n; j++){
			if (a[j] < a[min]){
				min = j;//ghi nh?n v? tr� ph?n t? nh? nh?t
			}
		}
		swap(a[min], a[i]);
	}
}
void main()
{
	int a[5] = {8, 4, 1, 6, 5};
	Selection_Sort(a, 5);
	cout<<"Mang sau khi sap xep:"<<endl;
	for(int i=0;i<5;i++){
		cout<<a[i]<<" ";
	}
	system("pause");
}
//https://gochocit.com/ky-thuat-lap-trinh/thuat-toan-sap-xep-chon-truc-tiep-selection-sort

// Hàm phân do?n
int partition(int a[], int low, int high){
    int pivot = a[high];     
    int right = high-1, left = low;    
    while(true){                         
        while(left<=right && a[left]<pivot) left++;     
        while(right>=left && a[right]>pivot) right--;   
        if(left>=right)            
            break;    
        left++;                     
        right--;
    }
    swap(a[left], a[high]);            
    return left;                      
}

void quickSort(int a[], int low, int high){
    if(low < high)  
    {
        int pivot = partition(a, low, high); 
    }    
}

void swap(int &a, int &b){
    int temp;
    temp = a;
    a = b;
    b = temp;
}
//https://duongdinh24.com/thuat-toan-quick-sort/

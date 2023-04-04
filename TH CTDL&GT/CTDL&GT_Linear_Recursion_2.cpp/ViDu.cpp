#include <stdio.h>
 
int GiaiThua(int n) {

    if (n == 1)
        return 1;
    else 
        return (n * GiaiThua(n - 1));
}
 
int main(void) {
 
    int n;
 
    printf("Nh?p s? nguyên du?ng n c?n tính giai th?a: ");
    scanf("%d", &n);
    
    printf("Giai th?a c?a %d là: %d",n,GiaiThua(n));
 
    printf("\n---------------------------------\n");
    printf("Chuong trình này du?c dang t?i codehow.net");
    return 0;  
}
//https://codehow.net/de-quy-tuyen-tinh-linear-recursion-trong-c-c++-87.html

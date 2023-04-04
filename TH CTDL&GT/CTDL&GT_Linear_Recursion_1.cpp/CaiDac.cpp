int GiaiThua(int n) {
   
    if (n == 1)
        return 1;
    else
   
        return (n * GiaiThua(n - 1));
}
//https://codehow.net/de-quy-tuyen-tinh-linear-recursion-trong-c-c++-87.html

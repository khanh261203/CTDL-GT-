#include<bits/stdc++.h>
using namespace std;
 
stack<int> st;
 
int main(){
    // Thêm các ph?n t? vào stack
    st.push(1);
    st.push(3);
    st.push(5);
    // Hi?n t?i stack là [1, 3, 5]
 
    // In ra ph?n t? cu?i cùng trong stack và kích thu?c stack
    cout << "Phan tu cuoi cung trong stack la:" << st.top() << endl;
    cout << "Kich thuoc hien tai cua stack la:" << st.size() << endl;
 
    // Lo?i b? 1 ph?n t? ra kh?i stack
    st.pop();
    cout << "Loai bo phan tu cuoi ra khoi stack" << endl;
    // Hi?n t?i stack là [1, 3]
 
    // Ki?m tra stack có r?ng không
    if(st.empty()) cout << "Stack rong" << endl;
    else cout << "Stack khong rong" << endl;
 
    // Sau khi lo?i b? 1 ph?n t? ra in ra ph?n t? cu?i cùng trong stack và kích thu?c stack
    cout << "Phan tu cuoi cung trong stack la:" << st.top() << endl;
    cout << "Kich thuoc hien tai cua stack la:" << st.size() << endl;
 
    // Lo?i b? t?t c? các ph?n t? ra kh?i stack
    while(st.size() > 0) st.pop();
 
    // Ki?m tra stack có r?ng không
    if(st.empty()) cout << "Stack rong" << endl;
    else cout << "Stack khong rong" << endl;
}
//https://howkteam.vn/course/cau-truc-du-lieu-va-giai-thuat/stack-cau-truc-du-lieu-ngan-xep-4271

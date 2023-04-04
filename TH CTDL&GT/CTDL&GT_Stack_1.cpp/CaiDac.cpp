//ktra dday
bool IsFull(int capacity){
    if(top >= capacity - 1){
        return true;
    }else{
        return false;
    }
}
//ktra rong
bool IsFull(int capacity){
    if(top >= capacity - 1){
        return true;
    }else{
        return false;
    }
}
//them ptu
void Push(int stack[], int value, int capacity){
    if(IsFull(capacity) == true){
        printf("\nStack is full. Overflow condition!");
    }else{
        ++top;
        stack[top] = value;
    }
}
//xoa ptu
void Pop(){
    if(IsEmpty() == true){
        printf("\nStack is empty. Underflow condition!");
    }else{
        --top;
    }
}
//lay gtri o dinh
int Top(int stack[]){
    return stack[top];
}
//xem kich thuoc
int Size(){
    return top + 1;
}
//https://blog.luyencode.net/ngan-xep-stack/

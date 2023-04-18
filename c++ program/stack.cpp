// #include <iostream>
#include <iostream>
#include<stack>
using namespace std;
// using namespace  std;
class Stack{
    public:
    int *arr;
    int size;
    int top;
    Stack(int size){
        this->size=size;
        arr=new int[size];
        top=-1;
    }
    void push(int element){
        if(size-top>1){
            top++;
            arr[top]=element;
        }
        else{
            cout<<"stack is full";
        }
    }
    void pop(){
        if(top>=0){
            top--;
        }
        else{
            cout<<"stack is underflow";
        }
    }
    int peek(){
        if(top>=0){
            return arr[top];
        }
        else{
            cout<<"stack is empty";
            return -1;
        }
    }

};
int main(){
    Stack st(3);
    st.push(2);
    st.push(3);
    st.push(4);
    // st.push(5);
    // st.push(7);
    // cout << st.peek()<<endl;
    return 0;
}
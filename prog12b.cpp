#include<iostream>
using namespace std;
template<typename T,int MAX> 
class Stack{
    int stack[MAX];
    int topIndex;
    public:
    Stack() : topIndex(0) {}
    void push(const T &value){
        if(topIndex<MAX){
            stack[topIndex++] = value;
        } else{
            cout<<"Stack overflow\n";
        }
    }
    void pop(){
        if(!empty()){
            --topIndex;
        } else{
            cout<<"Stack underflow\n";
        }
    }
    T& top(){
        if(!empty()){
            return stack[topIndex-1];
        } else{
            cout<<"Stack is empty\n";
        }
    }
    bool empty(){
        return topIndex == 0;
    }
    int getSize(){
        return topIndex;
    }
};
int main(){
    Stack<int,5>s;
    s.push(10);
    s.push(20);
    s.push(30);
    cout<<"\nThe size of Stack: "<<s.getSize()<<endl;
    cout<<"Elements in Array: \n";
    while(!s.empty()){
        cout<<"Top Element of Stack: "<<s.top()<<endl;
        s.pop();
    }
    return 0;
}
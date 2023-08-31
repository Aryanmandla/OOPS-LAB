#include<iostream>
using namespace std;
const int MAX_SIZE = 90;
class STACK{
    private:
    int stack[MAX_SIZE];
    int top;

    public:
    STACK(){
        top = -1;
    }
    void operator + (int element){
        if(top == MAX_SIZE-1){
            cout<<"Stack Overflow.\n";
            return;
        }
        stack[++top] = element;
        cout<<element<<" pushed onto the stack.\n";
    }
    int operator -- (){
        if(top == -1){
            cout<<"Stack Underflow\n";
            return -1;
        }
        int poppedElement = stack[top--];
        cout<<poppedElement<<" popped from the stack.\n";
        return poppedElement;
    }
    int operator -- (int){
            return operator--();
    }
    void display() const {
        if(top == -1){
            cout<<"Stack is empty.\n";
            return;
        }
        cout<<"Stack Elements: \n";
        for(int i = top; i>=0;i--){
            cout<<"|"<<stack[i]<<"|"<<endl;
        }
    }
};

ostream& operator<<(ostream& out,const STACK& obj){
    obj.display();
    return out;
}
int main(){
    STACK s1;
    int element;
    cout<<"Enter elements to push on to the stack (except -1).\n";
    while(element != -1){
        cin>>element;
        if(element == -1){
            break;
        }
        s1 + element;
    }
    cout<<"Stack: \n";
    cout<<s1<<endl;
    int num;
    cout<<"Enter the number of elements to be popped from the stack: ";
    cin>>num;
    cout<<"Popped Elements: \n";
    for(int i=0;i<num;i++){
        int poppedElement;
        poppedElement = s1--;
    }
    cout<<endl;
    cout<<"After operation, stack "<<endl;
    cout<<s1;
    return 0;
}
#include<iostream>
using namespace std;
template<typename T>
class calculator{
    public:
    T add(T num1,T num2){
        return num1 + num2;
    }
    T subtract(T num1,T num2){
        return num1 - num2;
    }
    T multiply(T num1,T num2){
        return num1 * num2;
    }
    T divide(T num1,T num2){
        if(num2 == 0){
            cout<<"Can't divide\n";
        }
        return num1/num2;
    }
};
int main(){
    calculator<int> intCalc;
    int a,b;
    cout<<"\n For Integer Values: \n";
    cout<<"Enter operands: ";
    cin>>a>>b;
    char ch;
    cout<<"Enter operators: ";
    cin>>ch;
    switch(ch){
        case '+':
        cout<<"Addition: "<<intCalc.add(a,b)<<endl;
        break;
        case '-':
        cout<<"Subtraction: "<<intCalc.subtract(a,b)<<endl;
        break;
        case '*':
        cout<<"Multiply: "<<intCalc.multiply(a,b)<<endl;
        break;
        case '/':
        cout<<"Divide: "<<intCalc.divide(a,b)<<endl;
        break;
        default:
        cout<<"Invalid\n";
    }
    cout<<endl;
    calculator<double> doubleCalc;
    int c,d;
    cout<<"\n For Floating Values: \n";
    cout<<"Enter operands: ";
    cin>>c>>d;
    cout<<"Enter operators: ";
    cin>>ch;
    switch (ch)
    {
    case '+':
        cout<<"Addition: "<<doubleCalc.add(a,b)<<endl;
        break;
        case '-':
        cout<<"Subtraction: "<<doubleCalc.subtract(a,b)<<endl;
        break;
        case '*':
        cout<<"Multiply: "<<doubleCalc.multiply(a,b)<<endl;
        break;
        case '/':
        cout<<"Divide: "<<doubleCalc.divide(a,b)<<endl;
        break;
        default:
        cout<<"Invalid\n";
    }
    return 0;
}
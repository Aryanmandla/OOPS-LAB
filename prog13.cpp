#include<iostream>
#include<stdexcept>
using namespace std;
double readfromkeyboard(const string& prompt){
    cout<<prompt;
    double num;
    cin>>num;
    if(cin.fail()){
        throw runtime_error("Invalid input. Please enter a valid double");
    }
    return num;
}
double divisionoftwonos(double dividend, double divisor){
    if(divisor == 0){
        throw runtime_error("Divisor can't be zero\n");
    }
    return dividend/divisor;
}
int main(){
    try{
    double num1 = readfromkeyboard("Enter value 1: ");
    double num2 = readfromkeyboard("Enter value 2: ");
    double result = divisionoftwonos(num1,num2);
    cout<<"Result of two numbers: "<<result<<endl;
    } catch(exception& e){
        cout<<"An exception occurred: "<<e.what()<<endl;
    }
    return 0;
}
#include<iostream>
using namespace std;    
class Complex{
    private:
    double real;
    double imaginary;

    public:
    Complex (){
        real = 0;
        imaginary = 0;
    }
    Complex(double r, double img){
        real = r;
        imaginary = img;
    }
    Complex ADD(int a,Complex s){
        Complex res;
        res.real = a + s.real;
        res.imaginary = s.imaginary;
        return res;
    }
    Complex ADD(Complex &s1, Complex &s2){
        Complex res;
        res.real = s1.real + s2.real;
        res.imaginary = s1.imaginary + s2.imaginary;
        return res;
    }
    void display(){
        cout<<real<<" + "<<imaginary<<"i"<<endl;
    }
};
int main(){
    Complex* c1 = new Complex(3,5);
    Complex* c2 = new Complex(7,9);

    Complex r1 = c2->ADD(4,*c1);
    Complex r2 = c1->ADD(*c1,*c2);

    r1.display();
    r2.display();
    return 0;
}
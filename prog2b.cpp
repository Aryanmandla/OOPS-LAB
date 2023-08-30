#include<iostream>
using namespace std;
class phone{
    private:
    int area_code;
    int exchange;
    int number;
    public:
    phone(){
        area_code = 044;
        exchange = 234;
        number = 8900;
    }
    void get(){
        cout<<"Enter the area code: ";
        cin>>area_code;
        cout<<"Enter the exchange: ";
        cin>>exchange;
        cout<<"Ente the number: ";
        cin>>number;
    }
    void display(){
        cout<<"("<<area_code<<") "<<exchange<<"-"<<number<<endl;
    }
};
int main(){
    phone p1;
    p1.display();
    phone p2;
    p2.get();
    p2.display();
    return 0;
}
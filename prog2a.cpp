#include<iostream>
using namespace std;
class date{
    private:
    int H,M,S;
    public:
    date(int hour,int min,int sec){
        H = hour;
        M = min;
        S = sec;
    }
    int res(){
        return (H*3600 + M*60 + S);
    }
};
int main(){
    int hour,min,sec;
    cout<<"Enter Hour: ";
    cin>>hour;
    cout<<"Enter Minutes: ";
    cin>>min;
    cout<<"Enter Seconds: ";
    cin>>sec;
    date d(hour,min,sec);
    cout<<"Time in Seconds is: "<<d.res()<<" seconds"<<endl;
    return 0;
}
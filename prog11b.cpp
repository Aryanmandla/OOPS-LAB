#include<iostream>
using namespace std;
template<typename T>
T sumX(T x1,T x2){
    T res;
    res = x1 + x2;
    return res;
}
template<typename T>
T sumY(T y1,T y2){
    T res;
    res = y1 + y2;
    return res;
}
int main(){
    int x1,y1,x2,y2;
    cout<<"Enter co-ordinates of Point 1: ";
    cin>>x1>>y1;
    cout<<"Enter co-ordinates of Point 2: ";
    cin>>x2>>y2;
    cout<<"Point 1: ("<<x1<<" , "<<y1<<")"<<endl;
    cout<<"Point 2: ("<<x2<<" , "<<y2<<")"<<endl;
    cout<<"Sum of Points: ("<<sumX<int>(x1,x2)<<" , "<<sumY<int>(y1,y2)<<")"<<endl;
    cout<<"Points are in double: "<<endl;
    double dx1,dy1,dx2,dy2;
    cout<<"Enter co-ordinates of Point 1: ";
    cin>>dx1>>dy1;
    cout<<"Enter co-ordinates of Point 2: ";
    cin>>dx2>>dy2;
    cout<<"Sum of Points: ("<<sumX<double>(dx1,dx2)<<" , "<<sumY(dy1,dy2)<<")"<<endl;
    return 0;
}
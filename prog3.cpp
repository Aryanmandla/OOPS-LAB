#include<iostream>
using namespace std;
class DB;
class DM{
    private:
    double metres,centimetres;
    public:
    DM(double met,double centi){
        metres = met;
        centimetres = centi;
    }
    friend void add(DM,DB);
};

class DB{
    private:
    double feet,inch;
    public:
    DB(double fee,double inc){
        feet = fee;
        inch = inc;
    }
    friend void add(DM,DB);
};
double mcmToinc(double met,double centi){
    return (met*39.37 + centi*0.393701);
}
double fincTocm(double fe,double inc){
    return (fe*30.48 + inc*2.53);
}
void add(DM dm,DB db){
    int choice;
    cout<<"\n1. In metres or centimeters\n2. In feets or inches\n";
    cout<<"Enter choice: ";
    cin>>choice;
    if(choice == 1){
        int a = fincTocm(db.feet,db.inch);
        int res = dm.metres*100 + dm.centimetres + a;
        cout<<"The distance in meters: "<<res/100<<"\nThe distance in centimeters: "<<res<<endl;
    } else{
        int b = mcmToinc(dm.metres,dm.centimetres);
        int res1 = db.feet*12 + db.inch + b;
        cout<<"The distance in feets: "<<res1/12<<"\nThe distance in inches: "<<res1<<endl;
    }
}
int main(){
    DM dm(1,100);
    DB db(1,12);
    add(dm,db);
    return 0;
}
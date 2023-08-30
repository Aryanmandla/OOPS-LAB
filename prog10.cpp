#include<iostream>
#include<cmath>
using namespace std;
class Shape{
    protected:
    float area,perimeter;
    public:
    Shape(){};
    virtual void initialize() = 0;
    virtual float computeArea() = 0;
    virtual float computePerimeter() = 0;
    virtual ~Shape(){};
};
class Triangle : public Shape{
    private:
    int s1,s2,s3;
    public:
    void initialize(){
        cout<<"Enter three sides of triangle: ";
        cin>>s1>>s2>>s3;
    }
    float computeArea(){
        float s = (s1+s2+s3)/2;
        area = sqrt(s*(s-s1)*(s-s2)*(s-s3));
        return area;
    }
    float computePerimeter(){
        perimeter = s1+s2+s3;
        return perimeter;
    }
};
class Rectangle : public Shape{
    private:
    int len,bread;
    public:
    void initialize(){
        cout<<"Enter the length: ";
        cin>>len;
        cout<<"Enter the breadth: ";
        cin>>bread;
    }
    float computeArea(){
        area = len*bread;
        return area;
    }
    float computePerimeter(){
        perimeter = 2*(len + bread);
        return perimeter;
    }
};
int main(){
    Triangle* t = new Triangle;
    Rectangle* r = new Rectangle;
    t->initialize();
    r->initialize();
    cout<<"Area of Triangle: "<<t->computeArea()<<endl;
    cout<<"Perimeter of Triangle: "<<t->computePerimeter()<<endl;
    cout<<"Area of Rectangle: "<<r->computeArea()<<endl;
    cout<<"Perimeter of Rectangle: "<<r->computePerimeter()<<endl;

    delete t;
    delete r;
    return 0;
}
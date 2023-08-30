#include<iostream>
using namespace std;
class Rectangle{
    private:
    int length,breadth,area;
    public:
    Rectangle(){
        length = 0;
        breadth = 0;
        area = 0;
    }
    Rectangle(int len){
        length = len;
        breadth = 10; // breadth having a default value.
    }
    Rectangle(int len,int bread){
        length = len;
        breadth = bread;
    }
    Rectangle&setDimensions(const int& len, const int& bread){
        length = len;
        breadth = bread;
        return *this; // modified object is returned as a reference, allows to chain multiple function calls together.
    }
    int computeArea();
    int computePerimeter();
};
int Rectangle :: computeArea(){
    area = length*breadth;
    return area;
}
int Rectangle :: computePerimeter(){
    int perimeter;
    perimeter = 2*(length + breadth);
    return perimeter;
}
int main(){
    Rectangle *r1 = new Rectangle();
    Rectangle *r2 = new Rectangle(10,15);
    r1->setDimensions(19,24);
    cout<<"Area of 1st Rectangle: "<<r1->computeArea()<<endl;
    cout<<"Perimeter of 1st Rectangle: "<<r1->computePerimeter()<<endl;
    cout<<"Area of 2nd Rectangle: "<<r2->computeArea()<<endl;
    cout<<"Perimeter of 2nd Rectangle: "<<r2->computePerimeter()<<endl;
    delete r1;
    delete r2;
    return 0;
}
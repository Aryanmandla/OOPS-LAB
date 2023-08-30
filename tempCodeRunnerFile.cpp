#include<iostream>
#include<algorithm>
using namespace std;
template<typename T,int N>
void sortArray(T (&arr)[N]){
    sort(arr,arr+N);
}
template<typename T,int N>
bool search(const T (&arr)[N],const T& num){
    for(int i=0;i<N;i++){
        if(arr[i] == num){
            return true;
        }
    }
    return false;
}
int main(){
    const int intSize = 5;
    int intArray[intSize] = {3,1,2,8,9};
    sortArray<int,intSize>(intArray);
    cout<<"Sorted Array: "<<endl;
    for(int i=0;i<intSize;i++){
        cout<<intArray[i]<<" ";
    }
    cout<<endl;
    int searchInt = 2;
    if(search<int,intSize>(intArray,searchInt)){
        cout<<searchInt<<" found in the array.\n";
    } else{
        cout<<searchInt<<" not found in the array.\n";
    }
    const int floatSize = 5;
    float floatArray[floatSize] = {2.4,7.7,2.1,8.8,9.3};
    sortArray<float,floatSize>(floatArray);
    cout<<"Sorted Float Array: "<<endl;
    for(int i=0;i<floatSize;i++){
        cout<<floatArray[i]<<" ";
    }
    cout<<endl;
    float searchFloat = 7.7;
    if(search<float,floatSize>(floatArray,searchFloat)){
        cout<<searchFloat<<" found in the array.\n";
    } else{
        cout<<searchFloat<<" not found in the array.\n";
    }
    return 0;
}
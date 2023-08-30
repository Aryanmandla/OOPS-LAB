#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int> number;
    cout<<"The number of elements in the vector: "<<number.size()<<endl;
    if(number.empty()){
        cout<<"Vector is empty\n";
    } else{
        cout<<"Vector is not empty\n";
    }
    number.push_back(10);
    number.push_back(20);
    number.push_back(30);
    cout<<"The updated size of the vector: "<<number.size()<<endl;
    int remIndex;
    cout<<"Enter Index of the element to be removed: ";
    cin>>remIndex;
    if(remIndex>=0 && remIndex<number.size()){
        number.erase(number.begin() + remIndex);
        cout<<"Element at position "<<remIndex<<" removed\n";
    }
    else{
        cout<<"Invalid Position\n";
    }
    int index = -1;
    int target = 30;
    for(int i=0;i<number.size();i++){
        if(number[i] == target){
            index = i;
            break;
        }
    }
    if(index != -1){
        cout<<"Element "<<target<<" found at index "<<index<<endl;
    } else{
        cout<<"Element not found"<<endl;
    }
    return 0;
}
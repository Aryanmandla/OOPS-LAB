#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int> arr;
    int n;
    cout<<"Enter the size of the vector: ";
    cin>>n;
    cout<<"Enter the elements of the vector: ";
    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        arr.push_back(temp);
    }
    sort(arr.begin(),arr.end(),greater<int>());
    cout<<"Sorted vector in descending order: \n";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}
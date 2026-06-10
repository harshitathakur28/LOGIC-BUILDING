#include<iostream>
#include<vector> 
#include<algorithm>
using namespace std;
int main(){
    vector<int>array;
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    cout<<"enter the elements of the array: ";
    for(int i=0;i<n;i++){
        int ele;
        cin>>ele;
        array.push_back(ele);
}
int largest=*(max_element(array.begin(),array.end()));
cout<<"The largest element in the array is: "<<largest<<endl;
    return 0;
}

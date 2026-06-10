#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements in the array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int count=0;
    for (int i=0;i<n;i++){
    if(arr[i]%2==0){
        count++;
    }
}
    cout<<"number of even numbers are: "<<count<<endl;
    return 0;
}

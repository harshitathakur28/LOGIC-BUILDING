#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of elements: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int count = 0;
    for(int j=0;j<n-1;j++){
        bool swapped = false;
    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            swap(arr[i],arr[i+1]);
            count++;
            swapped = true;
        } 
    }  
    if(!swapped){
        break;                 
    }}
    cout<<"total no of swaps: "<<count;
   
    return 0;
}
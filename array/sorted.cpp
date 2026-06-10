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
    for(int i=0;i<n-1;i++){
         if(arr[i]>arr[i+1]){
            cout<<"array is not sorted";
            return 0;
        }
    }
        cout<<"sorted array";
    return 0;
}
//to check if the array is sorted or not
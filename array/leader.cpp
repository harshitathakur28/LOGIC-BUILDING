#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int maxright=arr[n-1];

    cout<<maxright<<" ";
    for(int i=n-2;i>=0;i--){
        if(arr[i]>maxright){
            maxright=arr[i];
             cout<<maxright<<" ";
        }
    }
    return 0;
}
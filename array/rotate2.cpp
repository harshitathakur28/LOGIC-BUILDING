#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter  the size of the array: ";
    cin>>n;
    int arr[n];
    cout<<"enter the elements of the array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int temp=arr[0];
    for(int i=0;i<=n-1;i++){
        arr[i]=arr[i+1];

    }
    arr[n-1]=temp;

    cout<<"rotated array is: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
//rotate an array by one position to the left.
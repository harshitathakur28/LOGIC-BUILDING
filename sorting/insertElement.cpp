#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of elements: ";
    cin>>n;
    int arr[n+1];
    cout<<"Enter the elements: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int ele;
    cout<<"Enter the element to be inserted: ";
    cin>>ele;
    if(ele<arr[0]){
        for(int i=n;i>0;i--){
            arr[i]=arr[i-1];
        }
        arr[0]=ele;
    }
    else if(ele>arr[n-1]){
        arr[n]=ele;
    }
    else{
        for(int i=0;i<n;i++){
            if(ele<arr[i]){
                for(int j=n;j>i;j--){
                    arr[j]=arr[j-1];
                }
                arr[i]=ele;
                break;
            }
        }
    }
    cout<<"The array after insertion is: ";
    for(int i=0;i<=n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
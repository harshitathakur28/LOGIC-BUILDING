//to find the kth smallest element in an array
#include<iostream>
using namespace std;   
int main(){
    int n,k;
    cout<<"enter the size of the array: ";
    cin>>n;
    int arr[n];
    cout<<"enter the elements inside the array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"enter the value of k: ";
    cin>>k;
    if(k>n){
        cout<<"Can't find kth element"<<endl;
        return 0;
    }
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
    cout<<"The "<<k<<"th smallest element is: "<<arr[k-1]<<endl;
    return 0;
}
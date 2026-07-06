//to check if the array is sorted or not.
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
    bool isSorted=true;
    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            isSorted=false;
            break;
        }
        else{
            isSorted=true;
        }
    }
    if(isSorted){
        cout<<"The array is sorted."<<endl;
    }
    else{
        cout<<"The array is not sorted."<<endl;
    }
    return 0;
}

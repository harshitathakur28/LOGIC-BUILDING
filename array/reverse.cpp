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
    int i=0, j=n-1;
    cout<<"reversed array is: ";    
    while(i!=j){
        swap(arr[i],arr[j]);
        i++;
        j--;
    }
    // int *i=arr;          // using pointer
    // int *j=arr+n-1;
    // cout<<"reversed array is: ";
    // while(i<j){
    //     swap(*i,*j);
    //     i++;
    //     j--;
    // }
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
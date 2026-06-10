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
    int largest = arr[0];
    for(int i=0; i<n; i++){
        if(arr[i] > largest){
            largest = arr[i];
        }
    }
    int second_largest=arr[0];
    for(int i=0;i<n;i++){
        if(largest==second_largest){
            second_largest=arr[1];
        }
        if(arr[i]> second_largest && arr[i]<largest ){
            second_largest = arr[i];
        }
    }

    cout<<"The 2nd largest element in the array is: "<<second_largest<<endl;
    return 0;
}
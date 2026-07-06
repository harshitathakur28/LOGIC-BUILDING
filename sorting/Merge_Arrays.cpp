//to merge two sorted arrays into a single sorted array
#include<iostream>
using namespace std;
int main(){
    int a1,a2;
    cout<<"Enter the size of first array: ";
    cin>>a1;
    int arr1[a1],arr2[a2],arr3[a1+a2];
    cout<<"Enter the elements of first array: ";
    for(int i=0;i<a1;i++){
        cin>>arr1[i];
    }
    cout<<"Enter the size of second array: ";
    cin>>a2;
    cout<<"Enter the elements of second array: ";
    for(int i=0;i<a2;i++){
        cin>>arr2[i];
    }
    for(int i=0;i<a1;i++){
        arr3[i]=arr1[i];
    }
    for(int i=0;i<a2;i++){
        arr3[a1+i]=arr2[i];
    }
    for(int i=0;i<a1+a2;i++){
        for(int j=i+1;j<a1+a2;j++){
            if(arr3[i]>arr3[j]){
                int temp=arr3[i];
                arr3[i]=arr3[j];
                arr3[j]=temp;
            }
        }
    }
    cout<<"The merged sorted array is: ";
    for(int i=0;i<a1+a2;i++){
        cout<<arr3[i]<<" ";
    }
    return 0;
}
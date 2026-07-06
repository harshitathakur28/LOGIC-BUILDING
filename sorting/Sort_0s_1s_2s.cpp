//Sort array of 0s and 1s and 2s
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int count0=0,count1=0,count2=0;
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            count0++;
        }else if(arr[i]==1){
            count1++;
        }else if(arr[i]==2){
            count2++;
        }
        else{
            cout<<"Invalid input"<<endl;
            return 0;
        }
    }
    for(int i=0;i<count0;i++){
        arr[i]=0;
    }
    for(int i=count0;i<count0+count1;i++){
        arr[i]=1;
    }
    for(int i=count1+count0;i<n;i++){
        arr[i]=2;
    }
    cout<<"The sorted array is: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
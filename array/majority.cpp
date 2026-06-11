#include<iostream>
#include<algorithm>
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
    sort(arr,arr+n);
    int count=1;
   for(int i=0;i<n-1;i++){
    if(arr[i]==arr[i+1]){
        count++;
    }
    else{
        count=1;
    }
        if(count>n/2){
            cout<<"the element occuring majority of the time is: "<<arr[i];
            break;
    }
    else{
        cout<<"majority element does not exist";
        break;
    }
   }
    return 0;
}
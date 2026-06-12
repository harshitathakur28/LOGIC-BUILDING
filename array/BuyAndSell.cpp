#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int arr[n];
    cout<<"enter the elements in the array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int minprice=arr[0];
    int maxprofit=0;
    int profit;
    for(int i=0;i<n;i++){
        profit= arr[i] - minprice;
        if(profit>maxprofit){
            maxprofit=profit;
        }
        if(arr[i]<minprice){
            minprice=arr[i];
        }
    }
    cout<<"maxprofit: "<<maxprofit;
    return 0;
}
// product of array except itself

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
    cout<<"product is: ";
    for(int i=0;i<n;i++){
        int product=1;
        for(int j=0;j<n;j++){
            if(i!=j){
                product*=arr[j];
            }
        }
        cout<<product<<" ";
        
    }
return 0;
}

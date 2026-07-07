#include<iostream>
using namespace std;
int main() {
    int n;
    cout<<"Enter the number of elements in the array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array: ";
    for(int i=0; i<n; i++) {
        cin>>arr[i];
    }
    int target;
    cout<<"Enter the target element to search: ";
    cin>>target;
    int low = 0;
    int high = n - 1;
    int mid,elt;
    bool found = false;
    while (low <= high) {
        mid =(low+high) / 2;
        if (arr[mid] == target) {
            found = true;
            elt=mid;
            low = mid + 1; 
        }
        else if (arr[mid] < target) {
            low = mid + 1; 
        }
        else {
           high = mid - 1; 
        }
    }
    if (!found) {
        cout<<"Element not found in the array."<<endl;
    }
    else {
        cout<<"Element found at index: "<<elt<<endl;
    }
    return 0;
}

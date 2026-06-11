//union of two arrays

#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of the array A: ";
    cin>>n;
    int A[n];
    cout<<"Enter the elements in the array A: ";
    for(int i=0; i<n; i++){
        cin>>A[i];
    }
    
    int m;
    cout<<"Enter the size of the array B: ";
    cin>>m;
    int B[m];
    cout<<"Enter the elements in the array B: ";
    for(int i=0; i<m; i++){
        cin>>B[i];
    }
    vector<int> vec;
    for(int i=0;i<n;i++){
        bool found=false;
        for(int j=0;j<vec.size();j++){
            if(A[i]==vec[j]){
                found=true;
            }
        }
        if(!found){
            vec.push_back(A[i]);
        }
    }

    for(int i=0;i<m;i++){
        bool found=false;
        for(int j=0;j<vec.size();j++){
            if(B[i]==vec[j]){
                found=true;
            }
        }
        if(!found){
            vec.push_back(B[i]);
        }
    }
    cout<<"union of two arrays: ";
    for(int i=0;i<vec.size();i++){
        cout<<vec[i]<<" ";
    }
    return 0;
}

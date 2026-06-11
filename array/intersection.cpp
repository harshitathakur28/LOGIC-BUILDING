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
        for(int j=0;j<m;j++){
        bool found=false;
        if(A[i]==B[j]){
            for(int k=0;k<vec.size();k++){
            if(A[i]==vec[k]){
                found=true;
            }
        }
        }
        if(!found && A[i]==B[j]){
            vec.push_back(A[i]);
        }
    }
    }
    cout<<"intersection of two arrays: ";
    for(int i=0;i<vec.size();i++){
        cout<<vec[i]<<" ";
    }

}
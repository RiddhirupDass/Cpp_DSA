#include<iostream>
using namespace std;

int unique(int arr[], int n){
    int unique=0;
    for(int i=0; i<n; i++){
        unique=(unique)^(arr[i]);
    }
    return unique;
}

int main(){
    int n;
    cout<<"Please input size: ";
    cin>>n;
    int arr[n];
    cout<<"Please input values: "<<endl;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"The unique value is: "<<unique(arr, n);
    return 0;
}
#include<iostream>
using namespace std;

bool checking(int arr[], int n){
    if(n==1){
        return true;
    }

    bool rest = checking(arr+1, n-1);
    return (arr[0]<arr[1] && rest);
}

int main(){
    int n, key;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    
    checking(arr, n)?cout<<"The array is sorted":cout<<"The array is not sorted";
    return 0;
}
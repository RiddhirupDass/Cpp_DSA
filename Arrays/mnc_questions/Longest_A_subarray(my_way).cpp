#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"Size: ";
    cin>>n;
    int arr[n];

    cout<<"Values: ";
    for(int i=0; i<n; i++){

        cin>>arr[i];
    }

    int i=1, curr=2, big=0, d=(arr[1]-arr[0]);

    while(i<(n-1)){

        if(arr[i+1]-arr[i]==d){

            curr++;
        }

        else{

            curr=2;
            d=arr[i+1]-arr[i];
        }

        ++i;
        big=max(big,curr);
    }

    cout<<"The size of the longest arithmatic subarray is: "<<big;

    return 0;
}
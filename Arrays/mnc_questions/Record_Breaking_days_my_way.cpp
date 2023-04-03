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
    

    int i=0, days=0;

    while(i<n){

        if((i==n-1)&&(arr[i]>days)){

            days++;
        }

        else if((arr[i]>days) && (arr[i]>arr[i+1])){

            days++;
        }

        i++;
    }

    cout<<"Number of record breaking days are: "<<days;
    return 0;
}
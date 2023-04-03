#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"Please input size: ";
    cin>>n;

    int arr[n];
    cout<<"please input values: ";
    for(int i=0; i<n; i++){

        cin>>arr[i];
    }

    for(int i=0; i<(n-1); i++){

        int smallest=INT_MAX;
        int indexMin;

        for(int j=i; j<n; j++){

            if(arr[j]<smallest){

                smallest=arr[j];
                indexMin=j;
            }
        }

        int temp;
        temp=arr[i];
        arr[i]=arr[indexMin];
        arr[indexMin]=temp;
    }

    for(int i=0; i<n; i++){

        cout<<arr[i]<<" ";
    }

    return 0;
}
#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"Input size of Array: ";
    cin>>n;

    int arr[n];

    cout<<"Input values: ";

    for(int i=0; i<n; i++){

        cin>>arr[i];
    }

    int largest = INT_MIN;
    int smallest= INT_MAX;

    for(int i=0; i<n; i++){

        if(arr[i]>largest){

            largest=arr[i];

            if(smallest>arr[i]){

                smallest=arr[i];
            }
        }

        else if(arr[i]<smallest){

            smallest=arr[i];
        }
    }

    cout<<"LARGE: "<<largest<<endl;
    cout<<"SMALL: "<<smallest;

    return 0;
}
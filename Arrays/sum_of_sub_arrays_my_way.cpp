#include<iostream>
using namespace std;

int main(){

    int n;

    cout<<"Please input size: ";
    cin>>n;
    int arr[n];

    cout<<"Please input values: ";
    for(int i=0; i<n; i++){

        cin>>arr[i];
    }

    for(int i=0; i<n; i++){

        int sum=0;
        for(int j=i; j<n; j++){

            sum+=arr[j];
            cout<<"The sum is: "<<sum<<endl;
        }
    }

    return 0;
}
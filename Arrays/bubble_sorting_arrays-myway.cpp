#include<iostream>
using namespace std;

int bubbleSort(int n, int arr[]){

    int j=(n-1);

    while(j>0){

        for(int i=0; i<j; i++){

            if(arr[i]>arr[i+1]){

                int temp;
                temp=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;
            }
        }

        j--;
    }
}

int main(){

    int n;
    cout<<"Please input size: ";
    cin>>n;

    int arr[n];

    cout<<"Please input values: ";

    for(int i=0; i<n; i++){

        cin>>arr[i];
    }

    bubbleSort(n, arr);

    for(int i=0; i<n; i++){

        cout<<arr[i]<<" ";
    }

    return 0;
}
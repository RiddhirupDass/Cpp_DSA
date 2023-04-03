#include<iostream>
using namespace std;

void bubbleSorting(int n, int arr[]){

    for(int counter=1; counter<n; counter++){

        for(int i=0; i<(n-counter); i++){

            if(arr[i]>arr[(i+1)]){

                int temp;
                temp=arr[i];
                arr[i]=arr[(i+1)];
                arr[(i+1)]=temp;
            }
        }

    }
}

int main(){

    int n;
    cout<<"Please input size: ";
    cin>>n;

    int arr[n];
    cout<<"Please input elements: ";

    for(int i=0; i<n; i++){

        cin>>arr[i];
    }

    bubbleSorting(n, arr);

    for(int i=0; i<n; i++){

        cout<<arr[i]<<" ";
    }

    return 0;
}
#include <iostream>
using namespace std;

void bubbleSort(int n, int arr[]){

int counter=1;

while(counter<n){

    for(int i=0; i<(n-counter); i++){

        if(arr[i]>arr[i+1]){

            int temp;
            temp=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=temp;
        }
    }

    counter++;
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
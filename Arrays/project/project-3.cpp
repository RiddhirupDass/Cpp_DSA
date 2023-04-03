#include<iostream>
using namespace std;

int binarySearch(int n, int arr[], int key){


    int s=0;
    int e=(n-1);

    while(e>=s){

        int mid=((s+e)/2);

        if(arr[mid]==key){

            return mid;
        }

        else if(key>arr[mid]){

            s=(mid+1);
        }

        else{

            e=(mid-1);
        }

    }

    return -1;
}

int insertionSorting(int n, int arr[]){

    for(int i=1; i<n; i++){

        int j=(i-1);

        int temp;
        temp=arr[i];

        while(arr[j]>temp && j>=0){

            arr[j+1]=arr[j];

            j--;
        }

        arr[j+1]=temp;
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

    insertionSorting(n, arr);

    int key; 
    cout<<"Please input key: ";
    cin>>key;

    for(int i=0; i<n; i++){

        cout<<arr[i]<<" ";
    }

    cout<<endl;
    (binarySearch(n, arr, key)==-1)?cout<<"Key Not found!":cout<<binarySearch(n, arr, key);

    return 0;
}
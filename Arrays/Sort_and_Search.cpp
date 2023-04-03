#include <iostream>
using namespace std;

void out(int n, int arr[]){

    for(int i=0; i<n; i++){

        cout<<arr[i]<<" ";
    }
}

void in(int n, int arr[]){

    for(int i=0; i<n; i++){

        cin>>arr[i];
    }
}

int binarySearch(int n, int arr[], int key){

    int s=0, e=(n-1);

    while(s<=e){

        int mid= (s+e)/2;
        if(key<arr[mid]){
            e=(mid-1);
        }

        else if(key>arr[mid]){

            s=(mid+1);
        }

        else if(key==arr[mid]){

            return mid;
        }

        else{

            cout<<"The value is not present";
        }
    }
}

void selectionSort(int n, int arr[]){

    int smallest, temp, index;

    for(int i=0; i<(n-1); i++){

        smallest=INT_MAX;
        for(int j=i; j<n; j++){
            if(arr[j]<smallest){

                smallest=arr[j];
                index=j;
            }
        }
        temp=arr[i];
        arr[i]=arr[index];
        arr[index]=temp;
    }
}

int main(){

    int n, key;
    cout<<"Please input size: ";
    cin>>n;

    int arr[n];

    cout<<"Please input values: ";
    in(n, arr);
    cout<<endl;

    cout<<"The unsorted array is: ";
    out(n, arr);
    cout<<endl;

    cout<<"The sorted array is: ";
    selectionSort(n, arr);
    out(n, arr);
    cout<<endl;

    cout<<"Please enter Key: ";
    cin>>key;

    cout<<"The index is: "<<binarySearch(n,arr,key);

    return 0;
}
#include<iostream>
using namespace std;

int binarySearch(int n, int arr[], int key){

    int s=0;
    int e=(n-1);

    while(s<=e){

        int mid=((s+e)/2);

        if(arr[mid]==key){

            return mid;
        }

        else if(arr[mid]>key){

            e=(mid-1);
        }

        else{
            s=(mid+1);
        }
    }

    return -1;
}

int main(){

    int n;
    cout<<"Input size: ";
    cin>>n;

    int arr[n];

    cout<<"Input values: ";
    for(int i=0; i<n; i++){

        cin>>arr[i];
    }

    for(int i=0; i<(n-1); i++){

        int minIndex;
        int smallest=INT_MAX;
        for(int j=i; j<n; j++){

            if(arr[j]<smallest){

                smallest=arr[j];
                minIndex=j;
            }
        }

        int temp;
        temp=arr[i];
        arr[i]=arr[minIndex];
        arr[minIndex]=temp;
    }

    int key;
    cout<<"Please input key: ";
    cin>>key;

    for(int i=0; i<n; i++){

        cout<<arr[i]<<" ";
    }
    cout<<endl;

    (binarySearch(n, arr, key)==-1)? cout<<"Value not found!": cout<<binarySearch(n, arr, key);

    return 0;
}
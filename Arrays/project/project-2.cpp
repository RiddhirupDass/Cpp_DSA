#include<iostream>
using namespace std;

int bubbleSort(int n, int arr[]){

    int j=(n-1);

    while(j>0){

        for(int i=0; i<j; i++){

            if(arr[i]>arr[i+1]){

                int temp;
                temp= arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;
            }
        }

        j--;
    }
}

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
    cout<<"Please input size: ";
    cin>>n;

    int arr[n];

    cout<<"Please input values: ";
    for(int i=0; i<n; i++){

        cin>>arr[i];
    }

    bubbleSort(n, arr);

    int key;
    cout<<"Please input key: ";
    cin>>key;

    for(int i=0; i<n; i++){

        cout<<arr[i]<<" ";
    }

    cout<<endl;

    (binarySearch(n, arr, key)==-1)?cout<<"Value not found":cout<<binarySearch(n, arr, key);

    return 0;

}
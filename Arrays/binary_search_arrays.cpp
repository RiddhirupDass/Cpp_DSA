#include<iostream>
using namespace std;

int binarysearch(int n, int arr[], int key){

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

    int array[n];

    cout<<"please input values: ";
    for(int i=0; i<n; i++){

        cin>>array[i];
    }

    int key;
    cout<<"Key: ";
    cin>>key;

    cout<<binarysearch(n, array, key);

    return 0;

}
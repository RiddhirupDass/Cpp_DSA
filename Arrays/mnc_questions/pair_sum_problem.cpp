#include<iostream>
using namespace std;

void insertionSort(int n, int arr[]){

    for(int i=1; i<n; i++){
        int j=(i-1);
        int curr=arr[i];
        while(curr<arr[j] && j>=0){

            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=curr;
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
    int key;
    cout<<"Please input key: ";
    cin>>key;
    insertionSort(n, arr);

    int s=0, e=(n-1);

    while(s<e){

        if(arr[s]+arr[e]==key){
            break;
        }

        else if(arr[s]+arr[e]<key){

            s++;
        }
        else if(arr[s]+arr[e]>key){
            e--;
        }
    }

    if(s==e){
        cout<<"There are no such pairs!";
    }
    else{
        cout<<s<<" "<<e;
    }

    return 0;
}
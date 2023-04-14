#include<iostream>
using namespace std;

int last_occurance(int arr[], int n, int i, int key){
    int index;
    if(i==n){
        index =-1;
        return index;
    }
    index=last_occurance(arr, n, i+1, key);

    if(index!=-1){
        return index;
    }
    if(arr[i]==key){
        return i;
    }
}

int main(){
    int n, key;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"Input key: ";
    cin>>key;
    cout<<last_occurance(arr, n, 0, key);
    return 0;
}
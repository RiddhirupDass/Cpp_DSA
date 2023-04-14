#include<iostream>
using namespace std;

int first_occurance(int arr[], int n, int i, int key){
    int index;
    if(i==n){
        index=-1;
        return index;
    }
    if(arr[i]==key){
        return i;
    }
    index=first_occurance(arr, n, i+1, key);
    return index;

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
    cout<<first_occurance(arr, n, 0, key);
    return 0;
}
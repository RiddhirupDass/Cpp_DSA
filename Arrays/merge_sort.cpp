#include<iostream>
using namespace std;

void merge(int arr[],int mid, int l, int u){
    int i=l;
    int j=mid+1;
    int k=l;
    int b[u];
    while(i<=mid && j<=u){
        if(arr[i]<arr[j]){
            b[k]=arr[i];
            i++;
            
        }
        else{
            b[k]=arr[j];
            j++;
        }
        k++;
    }
    if(i>mid && j<=u){
        while(j<=u){
            b[k]=arr[j];
            j++;
            k++;
        }
    }
    else if(j>u && i<=mid){
        while(i<=mid){
            b[k]=arr[i];
            i++;
            k++;
        }
    }
    for(int r=l; r<=u; r++){
        arr[r]=b[r];
    }
}
void merge_sort(int arr[], int l, int u){

    while(l<u){
        int mid=(l+u)/2;
        merge_sort(arr,l,mid);
        merge_sort(arr,mid+1,u);
        merge(arr,mid,l,u);
    }
    
}
int main(){
    int n;
    cout<<"Please input size: ";
    cin>>n;
    int arr[n];

    for(int i=0; i<n; i++){
        cout<<"Input data: ";
        cin>>arr[i];
    }

    int l=0,u=(n-1);
    merge_sort(arr,l,u);
    cout<<"Sorted array is: ";
    for(int r=l; r<u; r++){
        cout<<arr[r]<<" ";
    }
    
    return 0;
}
#include<iostream>
using namespace std;

int linearsearch(int n, int array[], int key ){

    for(int i=0; i<n; i++){

        if(array[i]==key){

            return i;
        }
    }

    return -1;
}
int main(){

    int n;
    cout<<"Please input size of array: ";
    cin>>n;

    int array[n];
    cout<<"Please input values: ";
    for(int i=0; i<n; i++){

        cin>>array[i];
    }

    int key;
    cout<<"Key: ";
    cin>>key;

    cout<<linearsearch(n, array, key);

    return 0;
}
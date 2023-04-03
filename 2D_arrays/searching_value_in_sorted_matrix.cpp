#include<iostream>
using namespace std;

int main(){

    int n,m;
    cout<<"Please input size: ";
    cin>>n>>m;

    int arr[n][m];
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){

            cin>>arr[i][j];
        }
    }

    int key;
    cout<<"insert Value: ";
    cin>>key;

    bool flag=false;
    int r=0, c=m-1;
    while(r<n && c>=0){
        if(arr[r][c]==key){
            flag=true;
            break;
        }
        else if(arr[r][c]>key){
            c--;
        }
        else{
            r++;
        }
    }
    (flag==true)?cout<<"Value found at:"<<r<<","<<c:cout<<"Value not found!";

    return 0;
}
#include<iostream>
using namespace std;

int main(){

    int rows, columns;

    cout<<"Please insert rows and columns: ";
    cin>>rows>>columns;

    for(int i=1; i<=rows; i++){

        for(int j=1; j<=columns; j++){

            (i==1 || i==rows)?cout<<"*":(j==1 || j==columns)?cout<<"*":cout<<" ";
        }

        cout<<endl;
    }

    return 0;
}
#include<iostream>
using namespace std;

void toh(int n, char source, char help, char dest){

    if(n==0){
        return;
    }

    toh(n-1, source, dest, help);
    cout<<"From "<<source<<" to "<<dest<<endl;
    toh(n-1, help, source, dest);
}

int main(){
    int n; 
    cout<<"Please enter number of plates: ";
    cin>>n;

    cout<<"The Tower of Hanoi algorithm would be: "<<endl;
    toh(n, 'A', 'B', 'C');
    return 0;
}
#include<iostream>
using namespace std;

int main(){

    int a,b;

    cout<<"Please input the range:"<<endl;
    cin>>a>>b;

    for(int num=a; num<=b; num++){

        int i;

        for( i=2; i<num; i++){

            if(num%i==0){
                break;
            }
        }

        if(i==num){

            cout<<num<<" is a prime number"<<endl;
        }

//Here if we do not consider num to be a prime on the basis of the condition that i==num, but rather consider
// num to be a prime only on the basis of the condition that if num%i==0 then its a non prime then it will be wrong.
//Because then even num=1 will be considered as a prime number because its not satisfying the condition of num%i==0 as
//the for loop will run atleast once taking the initial value of i=2 and dividing it with 1. Hence, if we  consider i==num
//then automatically the compiler will reject num=1 as i!=1 since the initialisation of i is from 2 itself. So it is better
//add this if statement outside the loop with this condition rather than checking the value of any sperate variable to see 
//whether the compiler ran the whole loop or terminated in between, like we have done in some questions.
    }

     return 0;
}
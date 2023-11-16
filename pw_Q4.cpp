//Given two numbers a and b, write a function to print all the odd numbers between them.

#include<iostream>
using namespace std;


//Creating the function.
int odd(int a, int b){
    cin>>a>>b;
    for(int i=a; i<=b; i++){
        if( i%2==1){
            cout<<i<<" ";
        }
    }
    return 0;
}


//Using the Function Odd.
int main(){
int start, end;
cout<<"Give the start point a and end point b: ";

odd(start,end);//Calling the function.

    return 0;
}
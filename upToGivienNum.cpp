#include<iostream>
using namespace std;
int main(){

//write a program to generate fibonaci series up to a givien number.

//input 10 then print untill get 10.

//using while loop
/*
int num;
cout<<"Enter an integer number: ";
cin>>num;


int x=0;
int y=1;
int z=0;


while(z<=num){

    cout<<z<<" ";

    x=y;
    y=z;
    z=x+y;
}
*/
//using for loop
int num;
cout<<"Enter an integer number: ";
cin>>num;


int x=0;
int y=1;
int z=0;


for(z=0; z<=num; z=x+y){

     cout<<z<<" ";
     x=y;
     y=z;
   
}







    return 0;
}
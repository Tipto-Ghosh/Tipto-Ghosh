#include<iostream>
using namespace std;

int main(){

int x,y,z,num;
//int counter =0;
cout<<"Enter a number: ";
cin>>num;

x=0;
y=0;
z=1;

/*
while(counter < num){

    cout<<z<<" ";
    x=y;
    y=z;
    z=x+y;
    counter++;

}

*/

//Using for loop.

for(int counter=0; counter<num; counter++){

    cout<<z<<" ";
    x=y;
    y=z;
    z=x+y;
}

    return 0;
}
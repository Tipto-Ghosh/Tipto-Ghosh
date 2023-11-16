//Write a program which will ask the user to enter his/her marks (out of 100). Define a function that will display grades according to the marks

#include<iostream>
using namespace std;


//Creating the Function.
int result(int mark){
cin>>mark;

switch (mark)
{
case 'AA':
    mark>90 && mark<=100;
    break;
case 'AB':
    mark>80 && mark<=90;
    break;
case 'BB':
    mark>70 && mark<=80;
    break;
case 'BC':
    mark>60 && mark<=70;
    break;
case 'CD':
    mark>50 && mark<=60;
    break;
case 'DD':
    mark>40 && mark<=50;
    break;
//case "fail":
   // mark<40;
   // break;
default :
cout<<"Fail";
//cout<<"Enter a vaild mark.";

    
}

}


//Using the Function
int main(){

int mark;
result(mark);

    return 0;
}
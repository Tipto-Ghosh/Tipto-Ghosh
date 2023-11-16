//Define two functions to print the maximum and the minimum number respectively among three numbers entered by user.
#include<iostream>
using namespace std;


//creating the function
int number(int num1, int num2, int num3){
    cout<<"Enter 3 int num: ";
    cin>>num1>> num2>> num3;
    if(num1 >= num2){
        if(num1 >= num3){
            cout<<"First value is maximum: "<<num1<<endl;

        }
        else{
            cout<<"Third number is maximum: "<<num3;
        }
    }
    else{
        if(num2 >= num3){
            cout<<"Second number is maximum: "<<num2;
        }
        else{
            cout<<"Third number is maximum: "<<num3;
        }
    }
}


//Using the Function
int main(){

int a,b,c;
number(a,b,c);


    return 0;
}
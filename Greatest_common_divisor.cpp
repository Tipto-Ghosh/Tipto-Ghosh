#include<iostream>
using namespace std;

int main(){

int num1 , num2;
cin>>num1>>num2;

int gcd = 0;
int temp = 0;

if(num1<num2){
    temp = num1;
}
else{
    temp = num2;
}

for(int i=1; i<=temp; i++){
       
       if(num1%i==0 && num2%i==0){
           gcd = i;
       }

}

cout<<"GCD: "<<gcd;




    return 0;
}
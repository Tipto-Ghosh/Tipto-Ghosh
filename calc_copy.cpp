#include<iostream>
#include<math.h>
using namespace std;

int main(){
//Using
float num1, num2;
char ope;

cout<<"Enter num1 ope num2: ";
cin>>num1>>ope>>num2;

cout<<num1<<ope<<num2<<" = ";

    
switch(ope){

    case '+':
       cout<< num1 + num2 ;
    break;


case '-':
      cout<<   num1 - num2 ;
    break;

case '*':
     cout<<   num1 * num2 ;
    break;

case '/':
     cout<<   num1 / num2 ;
    break;


case '%':
    cout<<  int(num1)% int(num2) ;
    break;

case '^':
    cout<<   pow(num1,num2) ;
    break;
default:
 cout<<"Invalid num";

}

//cout<<num1<<ope<<num2<<" = ";

return 0;
}

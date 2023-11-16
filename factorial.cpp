#include<iostream>
using namespace std;
int main(){

int n;
cout<<"Enter a positive int num: ";
cin>>n;

int factorial = 1;
if(n<0){

    cout<<"Not a valid input.";
    
}
else if(n==0){
    cout<<"factorial = 1";
}
else{
    for(int i=1; i<=n; i++){
          factorial *= i;
    }
    cout<<"Factorial = "<<factorial;
}


//cout<<"Factorial = "<<factorial;



    return 0;
}
#include<iostream>
using namespace std;

int main(){

int num;
cout<<"Enter num:";
cin>>num;

int fibo[num];
fibo[0]=1;
fibo[1]=1;


for(int i=2; i<=num; i++){
  fibo[i]=fibo[i-1]+fibo[i-2];
}

for(int i=0; i<num; i++){
    cout<<fibo[i]<<" ";
}









    return 0;
}
#include<iostream>
using namespace std;

int main(){


int num;
cout<<"Enter a number: ";
cin>>num;


int array[10]={0,0,0,0,0,0,0,0,0,0};


while(num>0){
    int rem = num%10;
    array[rem] +=1;
  num/=10;
}


for(int i=0; i<=9; i++){
    cout<<"The frequency of "<<i<<" = "<<array[i]<<endl;
}



    return 0;
}
#include<iostream>
using namespace std;

int main(){

int size;
cout<<"enter the value how many numbers you want to genarate:";
cin>>size;

int array[size];

array[0] = 0;
array[1] = 1;

for(int i=2; i<=size ; i++){
    array[i] = array[i-1] + array[i-2];
}

for(int i=0; i<=size; i++){
  cout<<array[i]<<" ";
}









    return 0;
}
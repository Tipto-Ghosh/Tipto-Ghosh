#include<iostream>
using namespace std;

void plusOne(int array[],int size){
 if(array[size-1]==9){
    array[size-1-1] = array[size - 1-1]+1;
 }
 else{
    array[size-1] = array[size-1] + 1;
 }
 for(int i=0; i<size; i++){
    cout<<array[i]<<" ";
 }
 return;
}


int main(){

int array[3] ={1,2,3};

plusOne(array,3);




    return 0;
}
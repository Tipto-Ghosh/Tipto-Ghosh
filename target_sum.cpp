#include<iostream>
using namespace std;

int main(){

    int size ;
    cout<<"Enter the num of elements: ";
    cin>>size;

int array[size];

for(int i=0; i<size; i++){

    cin>>array[i];
}



int target;
cout<<"Enter the target: ";
cin>>target;

int total_possible=0;
for(int i=0; i<size; i++){

   for(int j=i+1; j<size; j++){

       if(array[i] + array[j]==target){

        total_possible+=1;
        cout<<"Index are: "<<i<<" and "<<j<<endl;
       }



   }
}


cout<<"total possible elements are: "<<total_possible;



    return 0;
}
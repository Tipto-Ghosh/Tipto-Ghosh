#include<iostream>
using namespace std;

int main(){


int  size;
cout<<"Enter the number of element: ";
cin>>size;


int array[size];


for(int i=0; i<size; i++){

    cin>>array[i];
}


int max=array[0];


for(int i=0; i<size; i++){
    
       if(array[i+1]> array[i]){

        max= array[i+1];
       }
       
    }
    


cout<<"Maximum: "<<max;





    return 0;
}
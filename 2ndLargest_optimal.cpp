//something wrong






#include<iostream>
using namespace std;

int main(){


int size;
cout<<"Enter the size: ";
cin>>size;

int array[size];


for(int i=0; i<size; i++){

    cin>>array[i];
}


int largest=array[0];
int second_largest = INT16_MIN;

for(int i=1; i<size; i++){

    if(array[i]>largest){
        int temp = largest;
        largest = array[i];
        second_largest=temp;
    }
}


cout<<"Largest: "<<largest<<endl;
cout<<"Second largest: "<<second_largest;












    return 0;
}
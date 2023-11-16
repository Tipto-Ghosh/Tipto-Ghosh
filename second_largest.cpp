 #include<iostream>
using namespace std;

int main(){

int size;
cout<<"Enter the element num: ";
cin>>size;

int array[size];

for(int i=0; i<size; i++){
    cin>>array[i];
}

int largest = array[0];
int second_largest = INT16_MIN;

//Find the largest elemnt 1st
for(int i=1; i<size; i++){

    if(array[i]>largest){
        largest=array[i];
    }
}


//now find the 2nd largest

for(int i=0; i<size; i++){

    if((array[i]>second_largest)&&(array[i]!=largest)){

         second_largest=array[i];
    }
}


cout<<"Largest: "<<largest<<endl;
cout<<"Second largest: "<<second_largest;











    return 0;
}
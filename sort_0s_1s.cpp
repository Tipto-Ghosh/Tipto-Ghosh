#include<iostream>
using namespace std;

//an unsorted 2d is givien just sort it.
int main(){

int unsort[3][4]={{1,1,1,0},{1,0,0,0},{1,0,0,1}};

int size= sizeof(unsort)/sizeof(unsort[0][0]);

//cout<<size;

for(int i=3; i>=0; i--){  //row : this will iterate through the row one by one.

    for(int j=4; ; j--){

        if(unsort[i][j-1]>unsort[i][j]){

            int temp = unsort[i][j-1];
            unsort[i][j-1] = unsort[i][j];
            unsort[i][j] = temp;
        } 
        
    }
}



for(int i=0; i<3; i++){

    for(int j=0; j<4; j++){

        cout<<unsort[i][j]<<" ";
    }
    cout<<endl;
}










    return 0;
}
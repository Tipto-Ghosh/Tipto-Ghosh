#include<iostream>
using namespace std;
int main(){


int unsort[3][4]={{1,3,2,5},{5,6,8},{9,12,12,4}};

int row = 3;
int col = 4;
int temp;

for(int i=0; i<row; i++){

    for(int j=0; j<col; j++){

        if(unsort[i][j]>unsort[i][j+1]){
               
               temp= unsort[i][j];
               unsort[i][j]=unsort[i][j+1];
               unsort[i][j+1] = temp;
            
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
#include<iostream>
using namespace std;

int main(){

int r , c;
cin>>r>>c;
int array1[r][c];


for(int i=0; i<r; i++){

    for(int j=0; j<c; j++){

        cin>>array1[i][j];
    }
}


int array[c][r];

for(int i=0; i<c; i++){

    for(int j=0; j< r; j++){
        array[i][j] = array1[j][i];
    }
}


for(int i=0; i<c; i++){

    for(int j=0; j<r; j++){

        cout<<array[i][j]<<" ";
    }
    cout<<endl;
}










    return 0;
}
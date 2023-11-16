#include<iostream>
using namespace std;

int main(){



int row, col;
cout<<"Enter row and col : ";
cin>>row>>col;


int array[row][col];

for(int i=0; i<row; i++){

    for(int j=0; j<col; j++){

        cin>>array[i][j];
    }
}



for(int i=0; i<row; i++){

    for(int j=0; j<col; j++){

        cout<<array[i][j]<<" ";
    }
    cout<<endl;

}


for(int i=0; i<col; i++){

    for(int j=0; j<row; j++){

        cout<<array[j][i]<<" ";
        
    }
//cout<<" ";
}




    return 0;
}
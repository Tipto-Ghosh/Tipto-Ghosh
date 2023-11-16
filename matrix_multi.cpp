#include<iostream>
using namespace std;

int main(){

int r1,c1;
cin>>r1>>c1;
int array1[r1][c1];


for(int i=0; i<r1; i++){

    for(int j=0; j<c1; j++){

        cin>>array1[i][j];
    }
}

//printing array1

for(int i=0; i<r1; i++){

    for(int j=0; j<c1; j++){

        cout<<array1[i][j]<<" ";
    }
    cout<<endl;
}


//array2
int r2 , c2;
cin>>r2>>c2;
int array2[r2][c2];

for(int i=0; i<r2; i++){

    for(int j=0; j<c2; j++){

        cin>>array2[i][j];
    }
}

for(int i=0; i<r2; i++){

    for(int j=0; j<c2; j++){

        cout<<array2[i][j]<<" ";
    }
    cout<<endl;
}


int array[r1][c2];

if(c1 != r2){
    cout<<"invalid input.";
}

else{
     for(int i=0; i<r1; i++){ //this for loop is for ans matrix row

        for(int j=0; j<c2; j++){ //this loop is for ans matrix column
              
              int sum=0;
              for(int k=0; k<c1; k++){  //here k<c1 or k<r1 cause r1=c1;but why we use this for loop here?
            
                    sum += array1[i][k] * array2[k][j];
              } 
              array[i][j] = sum;
        }
     }
           

}


for(int i=0; i<r1; i++){

    for(int j=0; j<c2; j++){
        cout<<array[i][j]<<" ";
    }
    cout<<endl;
}





    return 0;
}
#include<iostream>
using namespace std;
int main(){
    int r1,r2,c1,c2;
    cout<<"Enter row1,col1,row2,col2 : ";
    cin>>r1>>c1>>r2>>c2;
    if(c1!=r2){
        cout<<"multiplication not possible : ";
        return 0;
    }
    int A[r1][c1],B[r2][c2],C[r1][c2];
    //Taking element for matrice A
    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            cout<<"Enter element for A["<<i<<"]["<<j<<"] : ";
            cin>>A[i][j];
            
        }
    }
    //Taking element for matrice B
    for(int i=0;i<r2;i++){
        for(int j=0;j<c2;j++){
            cout<<"Enter element for B["<<i<<"]["<<j<<"] : ";
            cin>>B[i][j];
            
        }
    }

    cout<<"Matrice A is : \n";
    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            cout<<A[i][j]<<" ";
        }cout<<endl;
    }

    cout<<"\nMatrice B is : \n";
    for(int i=0;i<r2;i++){
        for(int j=0;j<c2;j++){
            cout<<B[i][j]<<" ";   
        }cout<<endl;
    }

    cout<<"Multiplication of matrice is : \n";
    for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
            C[i][j]=0;
            for(int k=0;k<r2;k++){
                C[i][j] += A[i][k]*B[k][j];
            }
        }
    }
    // printing of matrice C
    for(auto &x:C){
        for(auto y:x){
            cout<<y<<"  ";
        }cout<<endl;
    }
    return 0;
}
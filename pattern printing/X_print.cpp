#include<iostream>
using namespace std;
int main(){
    cout<<"Enter row : \n";
    int row,col;
    //cin>>row;
    row=7;
    col=8;
    for(int i=1;i<=row;i++){
        for(int j=1;j<=row;j++){
            if(i==j or j ==row+1-i){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
    return 0;
}
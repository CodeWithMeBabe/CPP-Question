#include<iostream>
using namespace std;
int main(){
    int row=7;
    for(int i=1;i<=row;i++){
        for (int j=1;j<=2*row-1;j++){
            if((i+j)>row and (i+j)<=(row*2)){
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
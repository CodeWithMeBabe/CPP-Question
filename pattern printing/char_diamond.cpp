#include<iostream>
using namespace std;
int main(){
    int row=7;
    int m;
    for(int i=1;i<2*row;i++){
        m=i;
        if(i>row) m=2*row-i;
        for(int j=1;j<=(row-m);j++){
            cout<<"  ";
        }
        for(int j=1;j<2*m;j++){
            cout<<char(64+j)<<" ";
        }
        cout<<endl;

    }
    
    return 0;
}
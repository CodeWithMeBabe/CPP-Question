#include<iostream>
using namespace std;
int main(){
    int row=7;
    for(int i=1;i<=row;i++){
        for(int j=1;j<=row-i;j++){
            cout<<"  ";
        }
        for(int j=1;j<=i;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}
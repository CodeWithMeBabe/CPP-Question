#include<iostream>
using namespace std;
int main(){
    cout<<"Enter row and column : \n";
    int row=10;
    for(int i=1;i<=row;i++){
        for(int j=1;j<=i;j++){
            if(i%2==0){
                cout<<char(64+j)<<" ";
            }
            else{
                cout<<j<<" ";
            }
        }
        cout<<endl;
    }
    
    
    return 0;
}
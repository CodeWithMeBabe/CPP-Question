#include<iostream>
using namespace std;
int main(){
    int row;
    cout<<"Enter row : ";
    cin>>row;
    for(int i=1;i<=row;i++){
        for(int j=1;j<=row;j++){
            if((i+j)>row){
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
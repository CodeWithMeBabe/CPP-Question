#include<iostream>
using namespace std;
int main(){
    cout<<"Enter row : \n";
    int row;
    //cin>>row;
    row=7;
    for(int i=1;i<=row+1;i++){
        for(int j=1;j<=row+1;j++){
            if(i==(row+1)/2 or j==(row+1)/2){
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
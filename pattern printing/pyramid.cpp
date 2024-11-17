#include<iostream>
using namespace std;
int main(){
    int row;
    cout<<"Enter row : ";
    cin>>row;
    for(int i=1;i<=row;i++){
        for(int j=1;j<=2*row-1;j++){
            if((i+row)==j){
                break;
            }
            else if((row+1)<=(i+j)){
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
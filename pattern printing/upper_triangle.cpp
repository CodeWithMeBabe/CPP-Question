#include<iostream>
using namespace std;
int main(){
    int row,count=0;
    cout<<"Enter row : ";
    cin>>row;
    for(int i=1;i<=row;i++){
        for(int j=1;j<=row;j++){
            count++ ;
            if((i+j)<=(row+1)){
                cout<<"* ";
            }
            if((i+j+1)>(row+1)){
                break;
            }
        }
        cout<<endl;
    }
    cout<<endl<<count;
    return 0;
}
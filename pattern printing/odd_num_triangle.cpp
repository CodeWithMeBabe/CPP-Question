#include<iostream>
using namespace std;
int main(){
    cout<<"Enter row : \n";
    int row;
    //cin>>row;
    row=4;
    for(int i=1;i<=row;i++){
        for(int j=1;j<=i;j++){
            cout<<(2*j-1)<<" ";
        }cout<<endl;
    }
    return 0;
}
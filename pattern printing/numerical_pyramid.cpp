#include<iostream>
using namespace std;
int main(){
    int row=5;
    int count;
    for(int i=1;i<=row;i++){
        count=1;
        for(int j=1;j<=2*row-1;j++){
            if((i+j)>=(row+1) and j<=(row+i-1)){
                cout<<count<<" ";
                count ++ ;
            }
            else{
                cout<<"  ";
            }
        }cout<<endl;
    }
    
    
    return 0;
}
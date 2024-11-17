#include<iostream>
using namespace std;
int main(){
    int row=5;
    int n;
    for(int i=1;i<=2*row-1;i++){
        if(i<=row){
            for(int j=1;j<=row-i;j++){
                cout<<"  ";
            }
            for(int j=1;j<=i*2-1;j++){
                cout<<"* ";
            }
        }
        else if (i>row) {
            n=i-row;
            for(int j=1;j<=n;j++){
                cout<<"  ";
            }
            for(int j=1;j<=(2*(row-n)-1);j++){
                cout<<"* ";
            }

        }
        cout<<endl;
    }
        
        
    
    
    return 0;
}
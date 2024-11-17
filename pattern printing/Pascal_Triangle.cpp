#include<iostream>
using namespace std;
int fact(int );
int npr(int ,int);
int ncr(int ,int);
int main(){
    int row=6;
    for(int i=0;i<row;i++){
        for(int j=0;j<=i;j++){
            cout<<ncr(i,j)<<"  ";
        }cout<<endl;
    }
}
int ncr(int a,int b){
    return (fact(a)/fact(b)/fact(a-b));
}
int npr(int a,int b){
    return (fact(a)/fact(a-b));
}
int fact(int b){
    if(b<0) return 0;
    if(b==0){
        return 1;
    }
    int pro=1;
    for(int i=1;i<=b;i++){
        pro *= i;
    }
    return pro;
}

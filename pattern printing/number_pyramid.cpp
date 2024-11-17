#include<iostream>
using namespace std;
#include<cmath>
int main(){
    int row=7;
    int size=(row*(row+1))/2;
    int arr[size];
    int count=0;
    int flag=0;
        for(int i=2;i<=INT32_MAX;i++){
            for(int j=2;j<=sqrt(i);j++){
                if(i%j==0){
                    flag=1;
                    break;
                }
            }
            if(flag==0){
                arr[count]=i;
                count++ ;
            }
            else{ flag=0;}
            if(count==size) break;
        }
        //Pattern Printing
        count =0;
    for(int i=1;i<=row;i++){
        //Space printing
        for(int j=1;j<row-i+1;j++){
            cout<<"   ";
        }
        for(int j=1;j<=i;j++){
            cout<<arr[count++]<<"     ";
        }cout<<endl;



    }
    
    return 0;
}


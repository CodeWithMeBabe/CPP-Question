#include<iostream>
using namespace std;
int main(){
    int arr[]={1,4,3,2,6,5};
    int size=sizeof(arr)/sizeof(arr[0]);
        int temp;
        for(int i=0;i<size/2;i++){
            temp=arr[i];
            arr[i]=arr[size-1-i];
            arr[size-1-i]=temp;
            
        }
        for(auto x:arr){
            cout<<x<<" ";
        }
}




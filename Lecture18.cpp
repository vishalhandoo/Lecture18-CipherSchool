#include<bits/stdc++.h>
using namespace std;




int main(){

    int i;
    int temp;
    int a[10];
    for(i=0;i<10;i++){
        cin>>a[i];
    }    

    int j;
    for(j=0;j<9;j++){
        for(i=0;i<10-j;i++){
            if(a[i+1]<a[i]){
                temp=a[i];
                a[i]=a[i+1];
                a[i+1]=temp;
            }
        }
    }
    for(i=0;i<10;i++){
        cout<<a[i]<<" ";
    }  
    return 0;
}
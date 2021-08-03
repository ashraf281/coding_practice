#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int temp;
    int n;
    cin>>n;
    int array[n];
    for(int i=0;i<n;i++){
        cin>>array[i];
    }
    for(int i=0;i<n;i++){
        for(int j=i+1; j<n; j++){
                if(array[i]>array[j]){
                    temp= array[i];
                    array[i]=array[j];
                    array[j]=temp;
                }
            }
    }
    for(int i=0; i<n; i++){

    }
    cout<<array[0]<<endl;
    cout<<array[n-1]<<endl;


}

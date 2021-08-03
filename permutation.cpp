#include<iostream>
#include<math.h>
using namespace std;
int factorial(int num){
    int fact=1;
    for(int i=num;i>0;i--){
        fact = fact*i;
    }
    return fact;
}
int main(){        //nPr=n!/(n-r)!
    int n,r;
    cin>>n>>r;
    if(n<r){
        cout<<"error"<<endl;
        return 0;
    }
    int p =factorial(n)/factorial(n-r);
    cout<<p;
    return 0;
}

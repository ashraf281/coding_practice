//program to find n raised to power of p using recursion.
#include<iostream>
using namespace std;
int power(int n, int p){
    if(p==0){
        return 1;
    }
     int prevPower = power(n, p-1);
    return n*prevPower;
}
int main(){
    int n,p;
    cin>>n>>p;
    cout<<power(n,p)<<endl;
}

//program to find factorial of a number n using recursion.
#include<iostream>
using namespace std;
int factorial(int n){
    if(n==0){
        return 1;
    }
     int prevFact = factorial(n-1);
    return n*prevFact;
}
int main(){
    int n;
    cin>>n;
    cout<<factorial(n)<<endl;
}

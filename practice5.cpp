#include<iostream>  //sum of digits of given number
using namespace std;
int main(){
    int num;
    cout<<"Enter any number"<<endl;
    cin>>num;
    int sum =0;
    do{
        sum+=num%10;
        num= num/10;
    }while(num!=0);
    cout<<"sum of the digit of number is: "<<sum<<endl;
}

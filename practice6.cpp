#include<iostream>            //INCLUSION-EXCLUSION PRINCIPLE
using namespace std;
int divisible(int n, int a, int b){    //IF WE WANT TO FIND HOW MANY NUMBER IS DIVISIBLE BY 5 OR 7
   int c1=n/a;                          //BETWEEN 1 AND 40 , SO according to principle we can find it
   int c2= n/b;                        //  by adding the number divisible by 5 and divisible by 7 and //
   int c3=n/(a*b);                     // subtracting it by the number divisible by both 5 and 7 //
    return c1+c2-c3;
}
int main(){
    int n, a,b;
    cin>>n>>a>>b;
    cout<<divisible(n,a,b)<<endl;

}

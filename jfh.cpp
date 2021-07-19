#include<iostream>
using namespace std;
int main(){    //TO CHECK EVEN OR ODD
    int a;
    cin>>a;
    if(a%2==0){
        cout<<a<<" is an even number"<<endl;
    }
   else{
        cout<<a<<" is an odd number"<<endl;
    }
    return 0;
}
int main(){      //sum of first n natural number
    int n;
    int i=1;
    cin>>n;
    int sum=0;
    while(i<=n){
            sum+=i;
            i++;
            }
    cout<<sum<<endl;
}
int main(){
    int a, b;
    cin>>a>>b;
    if(a>b){
        cout<<a<<"is greater than "<<b<<endl;
    }
    else{
        cout<<a<<"is less than "<<b<<endl;
    }
    return 0;
}
int main(){  //to check leap year or not
    int year;
    cin>>year;
    if((year%4==0 && (year % 100 != 0)) || (year % 400==0)){
        cout<<year<<" is a leap year"<<endl;
    }
    else{
        cout<<year<<" is a non-leap year"<<endl;
    }
}
int main(){           //To check if a number is prime or not
    int num,div=0;
    cin>>num;
    for(int i=1; i<=num; i++){
        if(num%i==0){
            div++;
        }
    }
    if(div == 2){
        cout<<num<<" is a prime number"<<endl;
    }
    else{
        cout<<num<<" is not a prime number"<<endl;
    }
}
//TO PRINT THE PRIME NUMBERS IN THE GIVEN RANGE
 int prime(int num){
     int div =0;
     for(int i =1; i<= num;i++){
            if(num%i==0){
                div++;
            }
     }
    if(div ==2){
        cout<<num<<endl;
    }

 }



    int main()

    {

        cout<<"Enter range:";

        int lowerLimit, upperLimit;

        //user input

        cin>>lowerLimit>>upperLimit;

        cout<<"Prime numbers between"<<lowerLimit<<"and"<<upperLimit<<"are:"<<endl;

        //finding prime numbers in the given range

        for(int i=lowerLimit;i<=upperLimit;i++){

            prime(i);

        }



    }


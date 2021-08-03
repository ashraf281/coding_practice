#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int first=0;
    int second=1;
    int next;
    int range;
    cin>>range;
    for(int i=first;i<=range;i++){
            if(i<=1){
                next=i;
            }
            else{
                next=first+second;
                first=second;
                second=next;
            }

        cout<<next<<" ";
    }

}

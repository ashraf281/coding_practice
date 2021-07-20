//REVERSE OF STRING THROUGH ITERATION
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    char str[] ="Ashraf coder";
    int length = strlen(str);
    for(int i=length-1;i>=0;i--){
        cout<<str[i];
    }
}

//REVERSE OF STRING USING BUILT-IN FUNCTION
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    char str[]="Ashraf Coder";
    cout<<strrev(str);
}

//REVERSE OF STRING USING RECURSION
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void reverse( string s){
    if(s.length()==0){
        return;
    }
    string reststr= s.substr(1);
    reverse(reststr);
    cout<<s[0];
}
int main(){
    reverse("Ashraf coder");
}


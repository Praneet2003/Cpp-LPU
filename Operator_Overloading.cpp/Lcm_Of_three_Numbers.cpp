// You are using GCC
#include<iostream>
using namespace std;

int gcd(int a,int b){
    if(b==0){
        return a;
    }
    return gcd(b,a%b);
}
int lcm(int a,int b){
    return (a*b)/gcd(a,b);
}
int LCMThree(int a, int b, int c){
    return lcm(lcm(a, b), c);
}
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    cout<<LCMThree(a,b,c);
}
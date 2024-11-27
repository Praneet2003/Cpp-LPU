// You are using GCC
#include<iostream>
using namespace std;
class GCD{
    public:
    int a,b;
    GCD(){
        cin>>a>>b;
    }
    inline int gcd(){
    int x=a,y=b;
    while(y!=0){
        int temp = y;
        y = x%y;
        x= temp;
    }
    return x;
    }
};
int main(){
    GCD g1;
    cout<<g1.gcd();
}
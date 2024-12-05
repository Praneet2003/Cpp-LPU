#include<iostream>
using namespace std;
class Complex_number{
    public:
    int x;
    int y;
    Complex_number(int a, int b){
        this->x=a;
        this->y=b;
    }
    Complex_number(){

    }
    friend void operator<<(ostream&,Complex_number&);
    // friend 
    // }
    public:
    Complex_number operator-(){
        Complex_number c(-x,-y);
        return c;
    }
};
// void operator<<(ostream &cout,Complex_number &c){
//     cout<<c.x<<"+"<<c.y<<"i";
// }
void operator<<(ostream &cout,Complex_number c){
    cout<<c.x<<"+"<<c.y<<"i";
}
int main(){
    Complex_number c1(2,4),c2(6,7);
    cout<<-c1;
    cout<<endl;
    cout<<-c2;
    cout<<endl;
    // cout<<c1;
}
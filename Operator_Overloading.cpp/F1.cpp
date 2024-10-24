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
    void print(){
        cout<<x<<" +i"<<y;
    }
    //return_type operator+('+' operator to be overloaded)(return_type &object) 
    Complex_number operator+(Complex_number &c){
        Complex_number m;
        m.x= this->x + c.x;
        m.y = this->y +c.y;
        return m;
    }
};
int main(){
    Complex_number c1(2,4),c2(6,7);
    Complex_number c3 = c1 + c2 ;//we need to overload the '+' operator here.
    //yah pe c1 hi constructor call krega.
    c1.print();
    cout<<endl;
    c2.print();
    cout<<endl<<"The vlaue of c3 object is: ";
    c3.print();
}
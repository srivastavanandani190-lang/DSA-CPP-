#include<iostream>
using namespace std;
//operator overloading
class Complex{
    int real, imag;
    public:
    Complex(int real, int imag){
        this->real = real;
        this->imag = imag;
    }
    void display(){
        cout << real << " + " << imag << "i" << endl;
    }
    //overloading + operator
    Complex operator + (const Complex &c){//with class you can access private members.
        return Complex(real + c.real, imag + c.imag);
    }
   Complex operator - (const Complex &c){
        return Complex(real - c.real, imag - c.imag);
    }
};
int main(){
    Complex c1(2, 3);
    Complex c2(4, 5);
    Complex c3 = c1 + c2; //using overloaded + operator
    c3.display(); //output: 6 + 8i
    Complex c4 = c1 - c2; //using overloaded - operator
    c4.display(); //output: -2 + -2i
        
    return 0;
}
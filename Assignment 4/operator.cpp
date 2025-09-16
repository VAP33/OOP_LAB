#include <iostream>
using namespace std;

class Complex {
    float real, img;
public:
    Complex(){
        real=0;
        img=0;
    }
    Complex(float a,float b){
        real=a;
        img=b;
    }
    Complex operator +(Complex);
    friend Complex operator *(Complex c1, Complex c2);
    friend istream& operator >>(istream& ,Complex&);
    friend ostream& operator <<(ostream& ,const Complex&);
};

Complex Complex::operator +(Complex obj){
    Complex temp;
    temp.real=real + obj.real;
    temp.img=img + obj.img;
    return temp;
}

Complex operator *(Complex c1, Complex c2){
    Complex temp;
    temp.real=c1.real*c2.real - c1.img*c2.img;
    temp.img=c1.real*c2.img + c1.img*c2.real;
    return temp;
}

istream &operator >>(istream &in, Complex &obj){
cout<<"Enter real part: ";
in>>obj.real;
cout<<"Enter imaginary part: ";
in>>obj.img;
return in;
}

ostream &operator <<(ostream &out,const Complex &obj){
out<<obj.real<<" + "<<obj.img<<"i";
return out;
}

int main(){
    Complex c1,c2,c3;
    cin>>c1;
    cin>>c2;
    cout<<"1st Complex Number: "<<c1<<endl;
    cout<<"2nd Complex Number: "<<c2<<endl;
    c3=c1+c2;
    cout<<"Sum : "<<c3<<endl;
    c3=c1*c2;
    cout<<"Product : "<<c3<<endl;
    return 0;
}

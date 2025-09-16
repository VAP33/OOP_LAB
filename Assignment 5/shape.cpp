#include<iostream>
using namespace std;
class Shape{
protected:
   int x,y;
public:
   void getdata();
   virtual void display_area()=0;


};
void Shape::getdata(){
   cout<<"Enter x: ";
   cin>>x;
   cout<<"Enter y: ";
   cin>>y;
}
class Triangle:public Shape{
void display_area(){
   cout<<"Area of Triangle is: "<<0.5*x*y<<endl;
}
};
class Rectangle:public Shape{
   void display_area(){
       cout<<"Area of Rectangle is: "<<x*y<<endl;
   }
};


int main(){
   Shape *ptr;
   Triangle t;
   Rectangle r;
   ptr=&t;
   ptr->getdata();
   ptr->display_area();
   ptr=&r;
   ptr->getdata();
   ptr->display_area();
   return 0;
}



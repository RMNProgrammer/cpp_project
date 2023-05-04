#include <iostream>

using namespace std;

class myComplex{ double re, img; public: //100565
    myComplex(const double a = 0, const double b = 0)
    {re = a; img = b;}
    myComplex(const myComplex& a){
      re = a.re; img = a.img;
      cout << "Copy Constructor" << endl;
    }
    ~myComplex(){cout << "Destructor" << endl;}
    void print(void) const
   {cout << '(' << re << ", " << img << ')' << endl;}
   myComplex add(const myComplex a){
     myComplex r = a;
     r.re  += re;
     r.img += img;
     return r;
   }
   myComplex sub(const myComplex a){
     myComplex r;
     r.re = re - a.re;
     r.img = img - a.img;
     return r;
   }
   myComplex mul(const myComplex a){
     myComplex r;
     r.re = re * a.re - img * a.img;
     r.img = img * a.re + re * a.img;
     return r;
   }
 };
  void myFunction(void){
    myComplex a(2, 3), b=4, c;
    c = a.add(b);
    c.print();
    c = a.sub(b);
    c.print();
    c = a.mul(b);
    c.print();
  }
 int main(){myFunction();return 0;}

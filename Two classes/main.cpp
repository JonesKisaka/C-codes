#include <iostream>
#include<math.h>
#define PI 3.142
using namespace std;

class Sphere{
private :
    int radius;
    double volume;

public:
void getradius();
void computevolume();
void printvolume();
Sphere();// class constructor. It is a special function since it has no return type and it is invoked when the class object is created.
Sphere(int r);
~Sphere();// class destructor
};

class Cylinder{
 private:
     int radius;
     float height;
     double volume;
 public:
    void getradius();
    void getheight();
    void computevolume();
    void printvolume();
    Cylinder();// class constructor
    Cylinder(int r, float h);
    ~Cylinder();// class destructor
};

    void Sphere:: getradius(){
     cout<<"Enter the radius of the sphere."<<endl;
     cin>>radius;
    }//The getradius function has been specified for the Sphere class only using the return type
    void Sphere:: computevolume(){
    volume=(PI*pow(radius, 3)*4)/3.0;
    }
    void Sphere:: printvolume(){
    cout<<"The volume of the sphere ="<<volume<<endl;
    }
    Sphere::Sphere(){
     cout<<"Object of class Sphere has been created"<<endl;
     radius=7;
    }// contents of the class Sphere constructor.
    Sphere::Sphere(int r){
     cout<<"Object of class Sphere has been created"<<endl;
     radius=r;
    }
    Sphere::~Sphere(){
     cout<<"Object destroyed"<<endl;
    }

    void Cylinder:: getradius(){
     cout<<"Enter the radius of the Cylinder."<<endl;
     cin>>radius;
    }//The getradius function has been specified for the Cylinder class only using the return type void then the class name followed by the scope resolution operator (::) then the function name.
    void Cylinder:: getheight(){
     cout<<"Enter the height of the Cylinder."<<endl;
     cin>>height;
    }
    void Cylinder:: computevolume(){
    volume=(PI*pow(radius, 2)*height);
    }
    void Cylinder:: printvolume(){
    cout<<"The volume of the cylinder ="<<volume<<endl;
    }
    Cylinder:: Cylinder(){
    cout<<"Object of class Cylinder has been created"<<endl;
    radius=7;
    height=3.5;
    }// this gives a value to both radius and height in case the user does not enter the values of radius and height.
    Cylinder:: Cylinder(int r, float h){
    cout<<"Object of class Cylinder has been created"<<endl;
    radius=r;
    height=h;
    }
    Cylinder::~Cylinder(){
     cout<<"Object destroyed"<<endl;
    }
int main()
{
  Cylinder cylinder;
  Cylinder cylinder2(2, 4);
  Sphere sphere; // sp1 is the object of class
  Sphere sphere2(2);//this the object for the parameterized constructor.

  //sphere.getradius();
  sphere.computevolume();
  sphere.printvolume();

  //cylinder.getradius();
  //cylinder.getheight();
  cylinder.computevolume();
  cylinder.printvolume();


  sphere2.computevolume();
  sphere2.printvolume();

  cylinder2.computevolume();
  cylinder2.printvolume();
    return 0;
}
// when the user enters the values, it gets overwritten



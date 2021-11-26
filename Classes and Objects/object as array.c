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

int main()
{
  Cylinder cylinder;
  Sphere sphere; // sp1 is the object of class

  sphere.getradius();
  sphere.computevolume();
  sphere.printvolume();

  cylinder.getradius();
  cylinder.getheight();
  cylinder.computevolume();
  cylinder.printvolume();


    return 0;
}


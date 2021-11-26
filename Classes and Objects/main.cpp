#include <iostream>
#include<math.h>
#define PI 3.142
using namespace std;

class Sphere{
private :
    int radius;
    double volume;

public:
    void getradius(){
     cout<<"Enter the radius of the sphere."<<endl;
     cin>>radius;
    }
    void computevolume(){
    volume=(PI*pow(radius, 3)*4)/3.0;
    }
    void printvolume(){
    cout<<"The volume of the sphere ="<<volume<<endl;
    }
};
int main()
{
  Sphere sp1[3]; // sp1 is the object of class
  for(int i=0; i<3; i++){
  sp1[i].getradius();
  sp1[i].computevolume();
  sp1[i].printvolume();
  }

    return 0;
}

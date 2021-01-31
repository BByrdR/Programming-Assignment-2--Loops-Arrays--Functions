#include <iostream>
#include <cmath>
#include <string>
using namespace std;
void input(float &feet,float &inches);
void calFeetInch(float feet,float inches,float &meters,float &cm);
void output(float meters,float cm,float feet,float inches);

int main() {
	 float feet, inches, meters, cm;
   char answer;
  do {
   cout << "Conversion of Imperial units to Metric system" << endl;
	 input(feet,inches);
	 calFeetInch(feet,inches,meters,cm);
	 output(meters,cm,feet,inches);
   cout<<"To stop or repeat calulation intput 'y' or 'Y'"<<endl;
	 cin>>answer;

} while (answer == 'y'||answer=='Y');

return 0;
}
void input(float &feet,float &inches){
       cout << "Feet: ";
       cin >> feet;
       cout << "Inches: ";
       cin >> inches;
}

void calFeetInch(float feet,float inches,float &meters,float &cm) {
    meters = feet* 0.3048 + (inches*0.0254);
    cm=(feet*30.48+inches*2.54);
}

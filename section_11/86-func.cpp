#include <iostream>
// #include <cmath>
// #include <iomanip>
using namespace std;

void playMusic(){
  cout<<"play music...🎹"<<endl;
}

void sayHi(string name){
  cout<<"Hi King " + name<<endl;
}

string sayHello(string name){
  return "Hello King " +name;
}

int areaOfCircle(int radius){
  return 3.14 * radius *radius;
}

int main()
{
  playMusic();
  sayHi("LPPD");
  cout<< sayHello("P. Duy")<<endl;

  int area = areaOfCircle(5);

  if(area>10){
    cout << "We can cut the land "<< area <<endl;
  }
  
  return 0;
}
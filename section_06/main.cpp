#include <iostream>
using namespace std;

int main()
{
  int x;
  // cout << sizeof(x) <<endl;
  cout << "Int "  <<sizeof(int) <<endl;

  cout << "Char " << sizeof(char) <<endl; // 1 byte
  cout << "Bool " << sizeof(bool) <<endl; // 1 byte
  cout << "Float " << sizeof(float) <<endl; // 4 bytes
  cout << "Double " << sizeof(double) <<endl; // 8 bytes

  short int age;
  cout<<"Short Int " <<sizeof(age) <<endl; // short int
  cout<<"Long Int " <<sizeof(long int) <<endl; // long int
  cout<<"Long Long Int " <<sizeof(long long int) <<endl; // long long int

  return 0;
}
#include <iostream>
// #include <cmath>
// #include <iomanip>
using namespace std;

int factorial(int n){
  int ans=1;
  for(int i;i<=n;i++){
    ans*=i;
  }
  return ans;
}
// int -> 10^9
// n=20 -> out of range
// => need an array to store all the digits 
int main()
{
  // code
  cout << 1*2*3*4*5*6 <<endl;
  cout <<factorial(6)<<endl;
  return 0;
}
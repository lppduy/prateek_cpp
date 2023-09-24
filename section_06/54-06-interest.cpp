#include <iostream>
#include <cmath>
using namespace std;

// int main()
// {
//   float p,r,t;
        
//   cin >> p >> r >> t;
        
//   cout << floor((p*r*t)/100);

//   return 0;
// }


int main()
{
  float p,r,t;
        
  cin >> p >> r >> t;
  
  float simpleInterest = (p*r*t) / 100;

  cout << floor(simpleInterest);
  
  return 0;
}
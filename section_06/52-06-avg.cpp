#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
        float a,b,c,d,e,sum,ans;
        
        cin >> a >> b >> c >> d >> e;
        
        sum = (a+b+c+d+e);
        
        ans = sum / 5;
        
        cout << fixed << setprecision(2) << ans ;
 
  return 0;
}
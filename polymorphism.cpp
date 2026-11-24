#include <iostream>
using namespace std;

class calculator
{
public:
         
      int add (int p,int q)
      {
             return p+q;
      }
      
      int add ( int p,int q, int r)
     {
             return p+q+r;
     }
     int  mult ( int s, int t)
     
     {
             return s*t;
     }
     
     int mult ( int s, int t, int u)
     {
             return s*t*u;
     }
};
     
int  main()
{
      int p=3,q=4,r=5
      cout<<add(p,q)<<endl;
      cout<<add(p,q,r)<<endl;
      cout<<mult(s,t)<<endl;
      cout<<mult(s,t,u)<<endl;
  
      return 0;
};

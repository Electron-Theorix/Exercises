/*
* Take home Assigment solution by
* SATURDAY, ISRAEL DUFF
* Department: COMPUTER SCIENCE
* REG NO: PDS/2013/2017
*
* This solution to the take home assignemt B
*/

#include <iostream>
#include <cmath>
using namespace std;

double factoral(double n)   // we need the factoral function
{
       double fact=0;
       if(n > 1)
       {
              fact = n;
              for(double m=n-1; m>1; m--) fact *= m;
              return fact;
       }
       else if ( n == 0 || n == 1 ) return fact = 1;
       else return fact = 0;
}

double constE( double acurracy )
{
       double e = 0;
       if( acurracy > 0 )
       {
           for(int k=1; k<=acurracy; k++)
           {
                   e += 1 / factoral((double)(k-1)); // the factorall function in use
           }
           return e;
       }
       else return e;
} 


int main()
{
   double n;       // number of accuracy
    cout<<"Enter the value for n = ";
    cin>>n;
   cout<<"Factoral of e "<<n<<"  = "<<constE(n)<<endl;    
    system("PAUSE");
    return 0;
}

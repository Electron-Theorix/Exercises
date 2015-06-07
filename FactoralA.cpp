/*
* Take home Assigment solution A by
* SATURDAY, ISRAEL DUFF
* Department: COMPUTER SCIENCE
* REG NO: PDS/2013/2017
*
* I decided not to use recursion for this particular exercise... 
* since there are many ways to implement without usng recursive functions
*/

#include <iostream>
#include <cmath>
using namespace std;

double factoral(double n)
{
       double fact=0;
       if(n > 1)     // checks if n is negative
       {
              fact = n;  // duplicate value of n
              for(double m=n-1; m>1; m--) fact *= m;    // same as fact = fact * m;
              return fact;
       }
       else if ( n == 0 || n == 1 ) return fact = 1;    // Note: factoral n = 1 or n = 0 is 1
       else return fact = 0;                            // otherwise return a zero
}

// the main method for testing the factoral
int main()
{
   double n;
    cout<<"Enter the value for n = ";
    cin>>n;
   cout<<"Factoral of "<<n<<"  = "<<factoral(n)<<endl;   
    system("PAUSE");
    return 0;
}

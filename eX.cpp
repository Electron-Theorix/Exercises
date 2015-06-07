/*
* Take home Assigment solution by
* SATURDAY, ISRAEL DUFF
* Department: COMPUTER SCIENCE
* REG NO: PDS/2013/2017
*
* This solution to the take home assignemt takes two parameters: one for the exponent and the other for the accuracy
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




double eX(int x, double acurracy) // it takes two parameters x for the exponent and n for the accuracy
{
       double e = 0;
       if(acurracy > 0) // check for negativity
       {
            for(double k = 1; k <= acurracy; k++)
            {
                    e += pow(x,(k-1)) / factoral((double)(k-1)); // just as is in the formulae
            }
            return e;
       }
       else return e;
}



int main()
{
   double n;     // number of acuracy
   int x;       //  variable x
    cout<<"Enter the value for n = ";
    cin>>n;
    cout<<" variable x = ";
    cin>>x;
    cout<<endl;
   cout<<"e^"<<x<<"  = "<<eX(x,n)<<endl;
   cout<<endl;
    system("PAUSE");
    return 0;
}

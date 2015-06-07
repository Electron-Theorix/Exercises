/*
* Take home Assigment solution by
* SATURDAY, ISRAEL DUFF
* Department: COMPUTER SCIENCE
* REG NO: PDS/2013/2017
*
* This is the solution to the take home assignemt on cryptography.
* The only thing  i have not been able to do is to write the decoder function...but it's on the way...
*/

#include <iostream>
#include <cmath>
using namespace std;


int myFloor(int numb, int n)   //My own implementation of the integer division function. 
{
	return (numb-(numb%n))/n;	// It takes two argument and performs the necessary computation
}

int encrypt(int digit)
{
       int encrypted;         // place holder for the encrypted output          
       int digits[3];   // An array of integer to hold digits of the number
	int decimal_Point_Shift=1000;   // value used in shifting the decimal point of the digit number
	int num2, num3;                 // some helping variables
    encrypted = num2 = num3 = 0;        // initialize variables before use
	
	// split the digit number into several digits and store them in the array
       for(int k=0; k<=3; k++)
	{
		num2=myFloor(digit,decimal_Point_Shift);		// store the integer part (or quotient) of digit divided  by decimal_Point_Shift;
		digits[k] = ( num2+7 ) % 10;            // store the arithmetic modulo 10 result in the array position k
		num3=num2*decimal_Point_Shift;	// shift the decimal point 3 places to the right (only for the first loop).
		digit=digit-num3;
		decimal_Point_Shift=decimal_Point_Shift/10;	// reduce the number of place to be shifted by 1;
	}	// end of digit splitting.
	encrypted += ( digits[0]*10 ) + digits[1] + ( digits[2]*1000 ) + ( digits[3]*100 );  // Arrange digits according to  positional number system
	return encrypted;
}  // End of encryption


// the  Main method for testing...
int main()
{
   int digit;
    cout<<"Enter the four digit number to encrypt = ";
    cin>>digit;
    cout<<"Encrypted value is = "<<encrypt(digit)<<endl;
   
    system("PAUSE");
    return 0;
}

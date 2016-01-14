#include <iostream>
#include <vector>
#include <string>
#include <fstream>

using namespace std;

// int main()
// {
//   cout << "Hello World!" << endl; // endl forces flush and \n

//   const double PI = 3.1415926535;

//   char myGrade = 'A';

//   bool isHappy = true;

//   int myAge = 39;

//   float favNum = 3.141592;

//   double otherfavNum = 1.6180339887;


//   // Other types include
//   // short int : At least 16 bits
//   // long int : At least 32 bits
//   // long long int : At least 64 bits
//   // unsigned int : Same size as signed version
//   // long double : Not less than double


//   cout << "Favorite Number " << favNum << endl;
//   cout << "Size of int " << sizeof(myAge) << endl;
//   cout << "Size of char " << sizeof(myGrade) << endl;
//   cout << "Size of bool " << sizeof(isHappy) << endl;
//   cout << "Size of float " << sizeof(favNum) << endl;
//   cout << "Size of double " << sizeof(otherfavNum) << endl;

//   cout << "5 + 2 = " << 5+2 << endl;
//   cout << "5 - 2 = " << 5-2 << endl;
//   cout << "5 * 2 = " << 5*2 << endl;
//   cout << "5 / 2 = " << 5/2 << endl;
//   cout << "5 % 2 = " << 5%2 << endl;

//   int five = 5;
//   cout << "5++ = " << five++ << endl; // 5, after
//   cout << "++5 = " << ++five << endl; // 7, before
//   cout << "5-- = " << five-- << endl; // 7
//   cout << "--5 = " << --five << endl; // 5

//   // Order of multiplication. multiplication and division performs before addition and subtraction.

//   cout << "4 / 5 = " << 4/5 << endl; // will return 0 because we need floating point number
//   cout << "4 / 5 = " << (float) 4/5 << endl; // correct. (float), this is called casting.


//   return 0; // 0 means execution went through perfectly fine.
// }

int main() 
{
	int age = 70;
	int ageAtLastExam = 16;
	bool isNotIntoxicated = true;

	if((age >= 1) && (age < 16))
	{
		cout << "You can't drive" << endl;

	} else if (! isNotIntoxicated) {

		cout << "You can't drive" << endl;

	} else if(age >=80 && ((age > 100) || ((age - ageAtLastExam) > 5))) {

		cout << "You can't drive" << endl;

	} else {

		cout << "You can drive" << endl;
	}



	return 0;
}
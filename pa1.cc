#include <iostream>
#include <vector>
#include <string>
#include <fstream>

#include <assert.h> // provides assert
#include "stats.h" // defines what must be implemented

// using namespace std;

namespace main_savitch_2C
{ 
  // Declares a statistician object called s
  statistician s;

  // Give the three numbers 1.1, 2.8, and -0.9 to the statistician
  s.next(1.1);
  s.next(2.8);
  s.next(-0.9);

  // Call the mean function, and print the result followed by a carriage return
  cout << s.mean() << endl;

  return 0;
}
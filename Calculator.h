#include <vector>
#include <string>
#include <math.h> 
using namespace std;
#ifndef cal
#define cal

void firstrun();
// Promises: Outputs version number and current executable

void menu();
/* Promises: Manages interface with user and runs in a loop
             decides which mathematical operation to run and calls
             the correct function                                    */

void readinput();
/* Requires: User summation input
    Promises: vector of doubles with correct signs */

void sum(vector<double> x);
/* Requires: Vector of numbers
   Promises: Sum of vector of numbers */



#endif

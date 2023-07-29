#include <iostream>
#include <string>

#include "taxinfo.hpp"

using namespace std;



struct TaxInfo{

    float salary;
    float taxPercent;

};

int main(int argc, char *argv[]) {

    if (argc < 3){
        cout << "missing command line arguments" << endl;
        return -1;
    }

    /* TODO 2: Collect salary "inSalary" and tax rate "inTaxRate" from command line arguments
    *float inSalary = ...
    *float inTaxRate = ...
    */

   float inSalary = atof( argv[1]);
   float inTaxRate = atof(argv[2]);

    /* TODO 3: Assign data to TaxInfo variable
    *TaxInfo taxCalc;
    * ...
    */

   TaxInfo taxCalc;
   TaxInfo* calc;
    calc = &taxCalc;
   taxCalc.salary = inSalary;
   taxCalc.taxPercent = inTaxRate;

    float tax;

    tax = calc->salary * (calc->taxPercent / 100);
    calc->taxPercent;
    /* TODO 4: Compute Tax using only pointer access
    * ...
    */

    /* TODO 5: Print salary, tax rate, and tax.
    * ...
    */

   cout << "The salary is: " << calc->salary << endl;
   cout << "The tax rate is: " << calc->taxPercent << endl;;
   cout << "The incurred tax is: " << calc->salary * (calc->taxPercent / 100) << endl;
   
 
   return 0;
}

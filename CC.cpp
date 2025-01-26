/*************************************************************************************
* OOP244 - 2251
*
* Student Name : Lissette Huilca
* Student Email : rlhuilca-aguilar@myseneca.ca
* Workshop #  : 3
* Course/Section: OOP244/NEE
*
* I declare that this assignment is my own work in accordance with the Seneca Academic
* Policy. No part of this assignment has been copied manually or electronically from/to
* any other source (including web sites) or distributed to other students.
*
* I have done all the coding by myself and only copied the code that my professor
* provided to complete my workshops and assignments.
*
**************************************************************************************/

#include <iostream>
#include "cstr.h"
#include "CC.h"
using namespace std;

namespace seneca {

   void CC::prnNumber(unsigned long long no) const {
      cout << no / 1000000000000ull << " ";
      no %= 1000000000000ull;
      cout.fill('0');
      cout.width(4);
      cout.setf(ios::right);
      cout << no / 100000000ull << " ";
      no %= 100000000ull;
      cout.width(4);
      cout << no / 10000ull << " ";
      no %= 10000ull;
      cout.width(4);
      cout << no;
      cout.unsetf(ios::right);
      cout.fill(' ');
   }


   void CC::set()
   {
       name = nullptr;
       cc_expYear = 0;
       cc_expMon = 0;
       cc_cvv = 0;
       number = 0;
   }


   void CC::set(const char* cc_name, unsigned long long cc_no, short cvv, short expMon, short expYear)
   {
       cleanUp();

       if (validate(cc_name, cc_no, cvv, expMon, expYear)) {
           alocpy(name, cc_name);
           number = cc_no;
           cc_cvv = cvv;
           cc_expMon = expMon;
           cc_expYear = expYear;
       }
       else
       {
           cleanUp();
       }
   }


   void CC::cleanUp()
   {
       freeMem(name);
       set();
   }


   bool CC::isEmpty() const
   {
       return name == nullptr;
   }


   void CC::display() const
   {
       if (isEmpty()) {
           cout << "Invalid Credit Card Record" << endl;
       }
       else {
           display(name, number, cc_expYear, cc_expMon, cc_cvv);
       }
   }


   void CC::display(const char* name, unsigned long long number, short expYear, short expMon, short cvv) const{
      char lname[31]{};
      strcpy(lname, name, 30);
      cout << "| ";
      cout.width(30);
      cout.fill(' ');
      cout.setf(ios::left);
      cout << lname << " | ";
      prnNumber(number);
      cout << " | " << cvv << " | ";
      cout.unsetf(ios::left);
      cout.setf(ios::right);
      cout.width(2);
      cout << expMon << "/" << expYear << " |" << endl;
      cout.unsetf(ios::right);
   }

  
   bool CC::validate(const char* name, unsigned long long cardNo, short cvv, short expMon, short expYear) const
   {
       bool valid = true;
       
       //name: should not be a null pointer and should be more than 2 characters long
       if (!(name != nullptr && strlen(name) > 2)) {
           valid = false;
       }

       //cardNo: values between 4000000000000000ull and 4099999999999999ull 
       if (!(cardNo >= 4000000000000000ull && cardNo <= 4099999999999999ull)) {
           valid = false;
       }

       //cvv: a three-digit number
       if (!(cvv >= 100 && cvv <= 999)) {
           valid = false;
       }

       //expMon: values between 1 and 12
       if (!(expMon >= 1 && expMon <= 12)) {
           valid = false;
       }

       //expYear: values between 24 and 32
       if (!(expYear >= 24 && expYear <= 32)) {
           valid = false;
       }

       return valid;
   }

}
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

#ifndef SENECA_CC_H_
#define SENECA_CC_H_
#include <iostream>

namespace seneca {

   class CC {

       char* name;
       short cc_expYear;
       short cc_expMon;
       short cc_cvv;
       unsigned long long number;

      void display(const char* name, unsigned long long number, short expYear, short expMon, short cvv) const;
      bool validate(const char* name, unsigned long long cardNo, short cvv, short expMon, short expYear)const;
      void prnNumber(unsigned long long no) const;

   public:
       void set();
       void set(const char* cc_name, unsigned long long cc_no, short cvv, short expMon = 12, short expYear = 24);
       void cleanUp();
       bool isEmpty() const;
       void display() const;
   };


}
#endif // !SENECA_CC_H_



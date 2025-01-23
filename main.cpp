/*************************************************************************************
* OOP244 - 2251
*
* Student Name : Lissette Huilca
* Student Email : rlhuilca-aguilar@myseneca.ca
* Workshop #  : 2
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
#include "input.h"
#include "dma.h"
using namespace std;
using namespace seneca;
void test_getInts();
void test_Contact();

int main() {
   
   // 1- overloading
   test_getInts();
   cout << "*********************************" << endl;
   // 2- DMA 1
   cout << "Enter the following:\n5\n1.1\n2.2\n3.3\n4.4\n5.5" << endl;
   reverse();
   cout << "*********************************" << endl;
   // 3- DMA 2 
   test_Contact();
   cout << "*********************************" << endl;
   return 0;
}

void test_getInts(){
   int num = 0;
   cout << "Testing getInt functions:" << endl;
   cout << endl << "Enter the following:\n2\n6\n3" << endl;
   cout << "Enter an integer:\n> ";
   num = getInt(3, 5);
   cout << "You entered: " << num << endl;
   cout << endl << "Enter the following:\nabc\n4\n> ";
   num = getInt(3, 5);
   cout << "You entered: " << num << endl;
   cout << endl << "Enter the following:\nabc\n2\n6\n4" << endl;
   cout << "Enter another integer:\n> ";
   while (!getInt(num, 3, 5)) {
      cout << "Only enter values between 3 and 5, inclusive:\n> ";
   }
   cout << "You entered: " << num << endl;
}

void test_Contact(){
   Contact* cptr;
   cout << "Enter the following:\nJohn\nDoe\n4412345123456\n" << endl;
   cptr = getContact();
   display(*cptr);
   setEmpty(*cptr);
   display(*cptr);
   deallocate(cptr);
}


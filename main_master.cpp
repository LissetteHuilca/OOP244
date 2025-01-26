/*************************************************************************************
* OOP244 - 2251
*
* Student Name : Lissette Huilca
* Student Email : rlhuilca-aguilar@myseneca.ca
<<<<<<< HEAD
* Workshop #  : 2
=======
* Workshop #  : 3
>>>>>>> master
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

<<<<<<< HEAD
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

=======

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstdio>
#include "CC.h"
using namespace std;
using namespace seneca;

void listCCs();

int main() {
   CC cc;
   cc.set();
   cc.set("Hubert Blaine", 4098765423457896, 100);
   cout << "Valid credit card record: " << endl;
   cc.display();
   cout << "+-----+--------------------------------+---------------------+-----+-------+" << endl;
   cout << "Valid credit card with very long name: " << endl;
   cc.set("Hubert Blaine Wolfeschlegelsteinhausenbergerdorff Sr.", 4098765423457896, 123, 1, 32);
   cc.display();
   cout << "+-----+--------------------------------+---------------------+-----+-------+" << endl;
   cout << "Invalid credit card with short name: " << endl;
   cc.set("H", 4098765423457896, 999, 12, 32);
   cc.display();
   cout << "+-----+--------------------------------+---------------------+-----+-------+" << endl;
   cc.set("Hubert Blaine", 4098765423457896, 123, 0, 25);
   cout << "Invalid credit card record with bad month: " << endl;
   cc.display();
   cout << "+-----+--------------------------------+---------------------+-----+-------+" << endl;
   cc.set("Hubert Blaine", 4098765423457896, 123, 13, 25);
   cout << "Invalid credit card record with bad month: " << endl;
   cc.display();
   cout << "+-----+--------------------------------+---------------------+-----+-------+" << endl;
   cc.set("Hubert Blaine", 4098765423457896, 123, 13, 23);
   cout << "Invalid credit card record with bad year: " << endl;
   cc.display();
   cout << "+-----+--------------------------------+---------------------+-----+-------+" << endl;
   cc.set("Hubert Blaine", 4098765423457896, 123, 13, 33);
   cout << "Invalid credit card record with bad year: " << endl;
   cc.display();
   cout << "+-----+--------------------------------+---------------------+-----+-------+" << endl;
   cc.set("Hubert Blaine", 4098765423457896, 99, 13, 33);
   cout << "Invalid credit card record with bad cvv: " << endl;
   cc.display();
   cout << "+-----+--------------------------------+---------------------+-----+-------+" << endl;
   cc.set("Hubert Blaine", 4098765423457896, 1000, 13, 33);
   cout << "Invalid credit card record with bad cvv: " << endl;
   cc.display();
   cout << "+-----+--------------------------------+---------------------+-----+-------+" << endl;
   cc.cleanUp();
   listCCs();
   return 0;
}
void listCCs() {
   char name[71]{};
   unsigned long long no{};
   short ccv{};
   short expMon{};
   short expYear{};
   int numRead{};
   unsigned int row{};
   FILE* ccfile = fopen("cc.csv", "r");
   CC cc;
   cout << "|     |                                |                     |     | Expiry|" << endl;
   cout << "| Row | Card holder name               | Credit card number  | CVV | MM/YY |" << endl;
   cout << "+-----+--------------------------------+---------------------+-----+-------+" << endl;
   cc.set();
   do {
      numRead = fscanf(ccfile, "%[^,],%llu,%hd,%hd,%hd\n", name, &no, &ccv, &expMon, &expYear);
      if (numRead == 5) {
         cc.set(name, no, ccv, expMon, expYear);
         cout << "| ";
         cout.width(3);
         cout.setf(ios::left);
         cout << ++row;
         cout.unsetf(ios::left);
         cout << " ";
         cc.display();
         cc.cleanUp();
      }
   } while(numRead==5);
   cout << "+-----+--------------------------------+---------------------+-----+-------+" << endl;
   if (ccfile) fclose(ccfile);
}
>>>>>>> master

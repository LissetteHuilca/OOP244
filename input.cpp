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
using namespace std;
namespace seneca {
   int getInt() {
      int num = 0;
      bool done = false;
      do {
         // extract an integer from the console and put it in num
         cin >> num;
         // if this action fails (the integer is unreadable)
         if (cin.fail()) {
            cout << "Bad integer entry, please try again:\n> ";
            // clear the failure status to activate cin again
            cin.clear();
         }
         else {
            done = true;
         }
         // flush the keyboard buffer up to 1000 characters or '\n', whichever comes first
         cin.ignore(1000, '\n');
      } while (!done);
      return num;
   }

   int getInt(int min, int max)
   {
       int num = 0;
       bool done = false;
       do {
           // extract an integer from the console and put it in num
           
           cin >> num;
           // if this action fails (the integer is unreadable)
           if (cin.fail()) {
               cout << "Bad integer entry, please try again:\n> ";
               // clear the failure status to activate cin again
               cin.clear();
           }
           else if(num < min || num > max){
               cout << "Invalid value, [ " << min << "<ENTRY<" << max << " ]" << endl;
               cout << "> ";
               cin.clear();
           }
           else {
               done = true;
           }
           // flush the keyboard buffer up to 1000 characters or '\n', whichever comes first
           cin.ignore(1000, '\n');
       } while (!done);
       return num;
   }

   int getInt(int& refIntNum, int min, int max)
   {
       int num = 0;
       bool response = false;
       cin >> num;

       if (cin.fail() || num < min || num > max) {
           cout << "Bad integer entry, please try again: \n> ";
           // clear the failure status to activate cin again
           cin.clear();
           // flush the keyboard buffer up to 1000 characters or '\n', whichever comes first
           cin.ignore(1000, '\n');
       }
       else {
           refIntNum = num;
           response = true;
       }

       return response;
   }  
}


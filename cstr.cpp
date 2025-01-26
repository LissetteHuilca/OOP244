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

#include "cstr.h"

namespace seneca {

   void freeMem(char*& mem)
   {
      delete[] mem;
      mem = nullptr;
   }
   bool alocpy(char*& des, const char* src) {
      freeMem(des);
      if (src) {
         des = new char[strlen(src) + 1];
         strcpy(des, src);
      }
      return bool(des);
   }
   unsigned int strlen(const char* src) {
      unsigned int len = 0;
      while (src[len]) len++;
      return len;
   }
   void strcpy(char* des, const char* src)
   {
      unsigned int i = 0;
      while (src[i]) {
         des[i] = src[i];
         i++;
      }
      des[i] = char(0);
   }
   void strcpy(char* des, const char* src, unsigned int maxLen) {
      unsigned int i;
      for (i = 0u; i < maxLen && src[i]; i++) {
         des[i] = src[i];
      }
      des[i] = 0;
   }
}
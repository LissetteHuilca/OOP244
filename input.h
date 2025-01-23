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

#ifndef SENECA_INPUT_H
#define SENECA_INPUT_H
namespace seneca {
   /// <summary>
   /// Performs a foolproof integer entry from the console.
   /// </summary>
   /// <returns>The integer read from the console</returns>
   int getInt();

   /// <summary>
   /// Performs a foolproof integer entry from the console with an upper and lower acceptable limit.
   /// </summary>
   /// <param name="minVal">int: Minimum acceptable value</param>
   /// <param name="maxVal">int: Maximum acceptable value</param>
   /// <returns>The integer read from the console</returns>
   int getInt(int min, int max);

   /// <summary>
   /// Performs an integer entry from the console only if the values are within the acceptable limits.
   /// </summary>
   /// <param name="number">A reference to an integer number to be read from the console</param>
   /// <param name="minVal">int: Minimum acceptable value</param>
   /// <param name="maxVal">int: Maximum acceptable value</param>
   /// <returns>bool: true if the number is successfully read, or false otherwise</returns>
   int getInt(int &refIntNum, int min, int max);

}
#endif // !SENECA_IO_H



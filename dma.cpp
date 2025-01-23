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
#include "dma.h"
using namespace std;
namespace seneca {

	void reverse()
	{
		int num;
		int i;

		cout << "Enter the number of double values: ";
		cin >> num;
		double* numbers = new double[num];
		int count = 0;

		while (count < num) {
			cout << count + 1 << ">";
			cin >> numbers[count];
			count++;
		}

		for (i = num - 1; i >= 0; i-- ) {
			cout << numbers[i] << endl;
		}

		delete [] numbers;

	}

	Contact* getContact()
	{
		Contact* contact = nullptr;
		contact = new Contact;
		cout << "Name: ";
		cin >> contact->m_name;

		cout << "Last name: ";
		cin >> contact->m_lastname;

		cout << "Phone number: ";
		cin >> contact->m_phoneNumber;

		return contact;
	}


	void display(const Contact& contact)
	{
		//Name Lastname, +Phonenumber
		cout << contact.m_name << " " << contact.m_lastname << ", " << "+" << contact.m_phoneNumber << endl;
	}


	void deallocate(Contact* contact)
	{
		delete contact;
		contact = nullptr;
	}


	void setEmpty(Contact& contact)
	{
		contact.m_name[0] = '\0';
		contact.m_lastname[0] = '\0';
		contact.m_phoneNumber = 0;
	}
}

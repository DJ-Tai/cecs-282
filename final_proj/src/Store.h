//============================================================================
// Name        : Store.h
// Author      : David Taitingfong
//				 Evan Pascual
// Date        : Apr 16, 2018
// Version     :
// Copyright   : 
// Description :
//============================================================================

#ifndef SRC_STORE_H_
#define SRC_STORE_H_

#include <iostream>
#include <string>

#include "Receipt.h"
//class Receipt;

using namespace std;

class Store
{
	public:
		Store();
		Store(string n, string a, string pn, string fn);
		~Store();

		string get_name() const;
		string get_address() const;
		string get_phone() const;
		string get_fax() const;

		void start_purchase();
		void print_receipt();

		Receipt* access_receipt();

	private:
		string name;
		string address;
		string phone_num;
		string fax_num;
		Receipt* new_purchase;

	friend class Receipt;
};


#endif /* SRC_STORE_H_ */

//============================================================================
// Name        : Receipt.h
// Author      : David Taitingfong
//				 Evan Pascual
// Date        : Apr 16, 2018
// Version     : 1.0
// Copyright   : 
// Description :
//============================================================================

#ifndef SRC_RECEIPT_H_
#define SRC_RECEIPT_H_

#include "Date.h"
#include "Item.h"
//#include "Store.h"
#include <vector>
#include <string>

class Store;

class Receipt
{
	public:
		Receipt();
		~Receipt();

		void set_date(Date current);
		void add_item(Item new_item);

	private:
		vector<Item*> items;
		Store* store;
		Date* purchased;

	friend class Store;
};

#endif /* SRC_RECEIPT_H_ */

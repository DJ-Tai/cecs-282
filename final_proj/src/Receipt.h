//============================================================================
// Name        : Receipt.h
// Author      : David Taitingfong
// Date        : Apr 16, 2018
// Version     :
// Copyright   : 
// Description :
//============================================================================

#ifndef SRC_RECEIPT_H_
#define SRC_RECEIPT_H_

#include "Date.h"
//#include "Store.h"

class Store;

class Receipt
{
	public:
		// TODO:
		Receipt();
		~Receipt();
		void display();


//	protected:
//		Store* store;
//		Date* purchased;

	private:
		// TODO:
		Store* store;
		Date* purchased;

	friend class Store;

};

#endif /* SRC_RECEIPT_H_ */

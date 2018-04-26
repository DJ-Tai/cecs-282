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
#include "Store.h"

class Receipt
{
	public:
		Receipt();
		~Receipt();
		void display();

	private:
		// TODO:
		Store* store;
		Date* purchased;

};

#endif /* SRC_RECEIPT_H_ */

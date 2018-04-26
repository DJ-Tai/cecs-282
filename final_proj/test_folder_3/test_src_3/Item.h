//============================================================================
// Name        : Item.h
// Author      : David Taitingfong
// Date        : Apr 16, 2018
// Version     :
// Copyright   : 
// Description :
//============================================================================

#ifndef SRC_ITEM_H_
#define SRC_ITEM_H_

#include <iostream>
#include <string>
using namespace std;

class Item
{
	public:
		Item();
		Item(string n, int q, double p);
		~Item();

		string get_name() const;
		int get_qty() const;
		double get_price() const;

		void set_qty();
		void set_price();

	private:
		string name;
		int qty;		// TODO: Technically, the store keeps track of quantity?
		double price;
		// TODO:: ec ? Category
};

#endif /* SRC_ITEM_H_ */

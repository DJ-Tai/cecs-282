//============================================================================
// Name        : Tester.cpp
// Author      : david
// Date        : Apr 27, 2018
// Version     :
// Copyright   : 
// Description :
/**
 * Each receipt must contain the following:
 * 1.	Market's name, address, phone number, and fax number
 * 2.	Date and time of purchase
 * 3.	Method of payment
 * 			a. Card - card type, display card number (e.g. XXXXXXXXXXXX1234), entry
 * 				  	  method, and whether the card was approved or not
 * 			b. Cash - cash amount
 * 4. 	List of items purchased which includes:
 * 			a. item name
 * 			b. quantity
 * 			c. total price
 * 5.	Subtotal (amount before tax)
 * 6.	Tax percent and mount
 * 7.	Balance due (total amount including tax)
 * 8.	Amount of change
 * 9.	Total number of items
 * 10.	Barcode
 *
 * DONT FORGET THE REPORT :(
 */
//============================================================================

#include "Store.h"
#include "Receipt.h"
#include "Item.h"
#include "Date.h"
#include <cassert>

int main()
{
	Store target ("Target", "Address",
				  "123-456-7890", "123-456-0987");
	// First purchase
	target.start_purchase();


	// Second purchase
	target.start_purchase();


	return 0;
}



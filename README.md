# Self-Checkout-Billing-System-Project
# PROBLEM STATEMENTS 
Traditional billing methods need a lot of space, which could be better utilised for the display of products. Staff wastes time at the checkout counters during idle periods when they could be replenishing shelves or organising inventory, among other things.

# 1.1.1	Existing System
Current systems use the traditional method of having multiple checkout counters with staff at each counter, checking out customers’ orders. This results in long queues which decrease customer satisfaction and store space on busy days. On slow days, due to staff waiting at empty checkout lines, in-store productivity is reduced.


# 1.2 	OBJECTIVE OF THE PROJECT 
Self-checkout billing systems not only reduce costs and have benefits for retailers but also save time for the customers. Customers will have a more satisfactory and enjoyable experience. The goal of our project is to enable the customer to have a smooth checkout experience and to save their precious time by cutting down the actual time spent waiting for cashiers and by allowing them to multitask and continue their previous tasks like being on the phone or listening to music, etc, that they were doing while shopping.

# 2	MODULES OF PROJECT
	1.	Class Bill:
		1.1.	input()
		1.2.	output(map<string, int>)
		1.3.	loop_input(map<string, int>)
	2.	Class Database:
		2.1.	loop(map<string, int>)
		2.2.	authority_check(map<string, int>)
		2.3.	add_item(map<string, int>)
		2.4.	delete_item(map<string, int>)
		2.5.	show_item(map<string, int>)
		2.6.	show_database(map<string, int>)
		2.7.	edit_item(map<string, int>)
	2.1.1	input()
		The method adds items to be billed to the map container- items (private data member of class Bill). The user is 
		first prompted to enter the item code and quantity in the following format- <item_code> <quantity>- and this pair
		of elements in inserted using the predefined method from map header file into items.
	2.1.2	output()
		This method calculates the total amount to be paid based on the elements inputted to the data member items. It 
		iterates through items (map container, data member of class Bill) and multiplies the second element of each pair 
		(quantity) into the second element of the map container given in the parameters whose first element matches with 
		it’s own. This value is then added to the total_price (data member of class Bill) and after the iteration is 
		complete, the final value of total_price is displayed as the total amount to be paid.
	2.1.3	loop_input(map<string, int>)
		This method allows the user to keep adding elements to the items container. The method first calls the method
		input(), then gives the user a choice- add items or calculate amount. If the user chooses to add items, the methods
		calls itself. If the user chooses to calculate the amount, the control goes back to the main program.
	2.2.1	loop(map<string, int>)
		This method loops through the various database manipulation options till the user is satisfied with the changes.
		The options of manipulation are displayed to the user. Once the user makes the choice, the corresponding data
		manipulation function is called and the item database is altered. Once the alteration is done, the method calls
		itself to continue the loop. If the user chooses to exit, instead of calling itself, the program goes back to
		its previous state of offering the options- bill order and edit item database.
	2.2.2	authority_check(map<string, int>)
		This method verifies the user and ensures that only admins access the map container in the parameters. It
		prompts the user to enter the password and using strcmp from string.h header file, compares the inputted
		string and the data member password. If the strings match, the method calls the function loop. If the
		strings do not match, access is not granted and the program goes back to showing the initial options
		of bill order and edit item database.
	2.2.3	add_item(map<string, int>)
		This method adds elements to the map container in the parameters. It takes input in the form of- 
		<item_code> <item_price>- and using insert function from map header file, adds it to the map
		container in the parameters and returns the altered container.
	2.2.4	delete_item(map<string, int>)
		This method deletes elements from the map container in the parameters. It takes input in the form
		of-<item_code> <item_price>- and using erase function from map header file, deletes it from the
		map container in the parameters and returns the altered container.
	2.2.5	show_item(map<string, int>)
		This method displays the second element of a particular pair of the map container in the 
		parameters. It takes the first element as the input from the user and using find function
		from map header to find its corresponding pair and displays it.
	2.2.6	show_database(map<string, int>)
		This method displays the map container given in the parameters. It iterates through the
		container given in the parameters and displays each of the pairs.
	2.2.7	edit_item(map<string, int>)
		This method edits pre-existing elements of the map container given in parameters. It first 
		uses the erase function to delete the user inputted element and inserts the element again
		with the new value. It then returns the altered container.








	


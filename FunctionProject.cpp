#include <iostream>
using namespace std;

	// void, this will not return anything
	// This cannot be placed at the end of the program
	// Always executed top to bottom
	// Do not put everything all together, will be harder to read

void function();

	// The function will not work until it is initiated in the main programming
	// Can right click on function() and choose what to see of the function written

void main()
{
	function();
	cout << "Hello from main():\n";
	function();
	function();
	function();
		// Each time you invoke a function, you need to write it out, don't
		// try to make 1 line of code work instead of a seperate line for each
		//just easier to read and follow later on



	system("pause>0");
}
	void function() {
		cout << "Hello from function()" << endl;
	}



#include <iostream>
#include <string>
#include <windows.h>
using namespace std;


int main( ) {

	string op;

	int ln, fn;

	cout << "\n\n\tSIMPLE CALCULATOR\n";

	cout
		<< "\n\t1| Add"
		<< "\n\t2| Subtract"
		<< "\n\t3| Multiply"
		<< "\n\t4| Divide"
	;


	cout << "\n\n\tInput the number of operation you want to perform:\n\n\t\t";

	cin >> op;


	if ( op != "1" && op != "2" && op != "3" && op != "4" ) {


		cout << "\n\n\tINVALID INPUT - PRESS ANY KEY TO TRY AGAIN\n\n\t";

		system( "pause" );

		system( "cls" );

		main( );
	}


	cout << "\n\n\tInput the first number:\n\n\t\t";

	cin >> fn;

	cout << "\n\n\tInput the last number:\n\n\t\t";

	cin >> ln;

	cout << "\n\n\t\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\";


	if ( op == "1" ) {

		cout << "\n\tTHE ANSWER IS " << fn + ln;
	}

	else if ( op == "2" ) {

		cout << "\n\tTHE ANSWER IS " << fn - ln;
	}

	else if ( op == "3" ) {

		cout << "\n\tTHE ANSWER IS " << fn * ln;
	}

	else {

		cout << "\n\tTHE ANSWER IS " << fn / ln;
	}

	cout << "\n\n\n";


	return 0;
}

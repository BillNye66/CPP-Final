#include <iostream>
#include <typeinfo>
#include <string>

using namespace std;
int main(int argc, char *argv[]) {

	cout << "Current instruction: " << "char array[5] = {'A', 'R', 'R', 'A', 'Y'}" << endl;
	char exampleArray[5] = {'A', 'R', 'R', 'A', 'Y'};
	cout << "An array may be declared as shown. These values are stored next to one another in memory and may be referenced with an index value like so: " << endl;
	
	cout << "Current instructions: var = array[3];" << endl <<"cout << array[3];";
	char var = exampleArray[3];
	cout << var;
	cout << "\"var\" was assigned the value contained at index 3" << endl << "C++ arrays assign memory locations in consecutive order. However, these memory locations are indexed beginning with zero instead of one. Therefore, to reference what we would consider the first memory location, 0 must be written for the subscript instead. This -1 rule applies to any other index in the array. " << endl << endl << "Enter a data type you would like a new array to contain: ";
	string dataType = 0;
	getline(cin, dataType);
	bool accepted = true;
	while (accepted == true) {
		if (dataType == "short") {
			short array[5] = {0, 0, 0, 0, 0};
			cout << "Enter short values for the array (you will be prompted to enter five):" << endl;
			for (int i = 0; i < 5; i++) {
				cout << "Enter a short value for index " << i << ": ";
				cin >> input;
				if (input == 0) {
					cout << endl << "Error: Data type of input does not match selected type" << endl;
					i = i - 1;
				}
				else {
					input >> array[i];		
				}
			}	
		}
		else if (dataType == "int") {
			int array[5] = {0, 0, 0, 0, 0};
			cout << "Enter integer values for the array (you will be prompted to enter five):";
			for (int i = 0; i < 5; i++) {
				cout << "Enter an integer value for index " << i << ": ";
				cin >> input;
				if (input == 0) {
					cout << endl << "Error: Data type of input does not match selected type" << endl;
					i = i - 1;
				}
				else {
					input >> array[i];		
				}
			}
		}
		else if (dataType == "float") {
			float array[5] = {0.0, 0.0, 0.0, 0.0, 0.0};
			cout << "Enter float values for the array (you will be prompted to enter five):";
			for (int i = 0; i < 5; i++) {
				cout << "Enter a float value for index " << i << ": ";
				cin >> input;
				if (input == 0) {
					cout << endl << "Error: Data type of input does not match selected type" << endl;
					i = i - 1;
				}
				else {
					input >> array[i];		
				}
			}
		}
		else if (dataType == "double") {
			double array[5] = {0.0, 0.0, 0.0, 0.0, 0.0};
			cout << "Enter double values for the array (you will be prompted to enter five):";
			for (int i = 0; i < 5; i++) {
				cout << "Enter a double value for index " << i << ": ";
				cin >> input;
				if (input == 0) {
					cout << endl << "Error: Data type of input does not match selected type" << endl;
					i = i - 1;
				}
				else {
					input >> array[i];		
				}
			}
			
		}
		else if (dataType == "boolean") {
			bool array[5] = {false, false, false, false, false};
			cout << "Enter boolean values for the array (you will be prompted to enter five):";
			for (int i = 0; i < 5; i++) {
				cout << "Enter a boolean value for index " << i << ": ";
				cin >> input;
				if (input == 0) {
					cout << endl << "Error: Data type of input does not match selected type" << endl;
					i = i - 1;
				}
				else {
					input >> array[i];		
				}
			}
		}
		else if (dataType == "string") {
			string array[5] = {"", "", "", "", ""};
			cout << "Enter string values for the array (you will be prompted to enter five):";
			cin >> input;
			if (input == 0) {
				cout << endl << "Error: Data type of input does not match selected type" << endl;
				i = i - 1;
			}
			else {
				input >> array[i];		
			}
		}
		else {
			cout << "Input does not match a C++ datatype. Available data types are \"short\" \"integer\" \"float\" \"double\" \"boolean\" and \"string\"";
			accepted = false;
		}
	}
	cout << "You now have a " << dataType << "array with all indexes declared. With a for loop, you can sift through all of the values using the control variable of the loop." <<endl;
	cout << "Current instruction: "
	for (i = 0; i < 5; i++) {
		
	}
	/* for (int i = 1; i < 5; i++){	cout << array[i] << endl << endl;
		
	}
	


	int numbers[1] = {0};
	int arrayNumbers = 0;
	int aaa = 0;
	cout << "Enter any 4 one digit numbers";
	cin >> arrayNumbers;
	numbers[1] = arrayNumbers + aaa;
	cout << aaa;
	*/
}
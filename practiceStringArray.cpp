#include <iostream>

#include <string>
using namespace std;
int main(int argc, char *argv[]) {
	
	cout << "Ensure you have the source file opened and viewable. Explanations of program instructions can be found there, as well as in the programs.";

	//This declares a group of different characters in the same space in memory, and it declares them as the same data type.
	//In this case, the array is a char array.
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
			short array[5] {0, 0, 0, 0, 0};
			for (int i = 0; i < 5; i++) {
				cout << "Enter a value for index " << i << ": "
				cin >> array[i];
				cout << endl;
			}
		}
		else if (dataType == "int") {
			
			cout << "Enter integer values for the array (you will be prompted to enter five):";
			
		}
		else if (dataType == "float") {
			
			cout << "Enter float values for the array (you will be prompted to enter five):";
			
		}
		else if (dataType == "double") {
			
			cout << "Enter double values for the array (you will be prompted to enter five):";
			
		}
		else if (dataType == "boolean") {
			
			cout << "Enter boolean values for the array (you will be prompted to enter five):";
			
		}
		else if (dataType === "string") {
			
			cout << "Enter string values for the array (you will be prompted to enter five):";
			
		}
		else {
			cout << "Input does not match a C++ datatype. Available data types are \"short\" \"integer\" \"float\" \"double\" \"boolean\" and \"string\"";
			accepted = false;
		}
	}
	for (int i = 1; i < 5; i++){	cout << array[i] << endl << endl;
		
	}
	


	int numbers[1] = {0};
	int arrayNumbers = 0;
	int aaa = 0;
	cout << "Enter any 4 one digit numbers";
	cin >> arrayNumbers;
	numbers[1] = arrayNumbers + aaa;
	cout << aaa;

}
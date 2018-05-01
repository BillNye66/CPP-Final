//String/array Practice. 
//Written by Raymond Fisher(raymond.fisher256@gmail.com), Damien S. ()
//Last edited on 5/1/2018

#include <iostream>
#include <string>

using namespace std;
int main(int argc, char *argv[]) {
	
	cout << "Ensure you have the source file opened and viewable. Explanations of program instructions can be found there, as well as in the programs.";

	//This declares a group of different characters in the same space in memory, and it declares them as the same data type.
	//In this case, the array is a char array.
	cout << "Current instruction: " << "char array[5] = {'A', 'R', 'R', 'A', 'Y'};"
	char array[5] = {'A', 'R', 'R', 'A', 'Y'};
	cout << "";
	
	for (int i = 1; i < 5; i++)	cout << array[i] << endl << endl;
		
	}
	
	cout << "Line 9 shows how an array can be written. You need a data type followed by the array name. In this case, I named this array just array." << endl;
}
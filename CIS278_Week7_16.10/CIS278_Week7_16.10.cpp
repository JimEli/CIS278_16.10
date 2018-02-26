/*************************************************************************
* Title: Reading Data from a File
* File: CIS278_Week7_16.10.cpp
* Author: James Eli
* Date: 2/5/2018
*
* Exercise 16.10 on page 755, Reading Data from a File
* Use an istream_iterator<int>, the copy algorithm and a back_inserter to 
* read the contents of a text file that contains int values separated by 
* whitespace. Place the int values into a vector of ints. The first argument 
* to the copy algorithm should be the istream_iterator<int> object that’s 
* associated with the text file’s ifstream object. The second argument 
* should be an istream_iterator<int> object that's initialized using the 
* class template istream_iterator’s default constructor--the resulting 
* object can be used as an "end" iterator. After reading the file’s 
* contents, display the contents of the resulting vector.

* Notes:
*  (1) Uses text file "input.txt" located inside project folder.
*  (2) File "input.txt" contains the numerals 1 through 0, separated by a 
*      space.
*  (2) Compiled with MS Visual Studio 2017 Community (v141).
*
* Submitted in partial fulfillment of the requirements of PCC CIS-278.
*************************************************************************
* Change Log:
*   02/05/2018: Initial release. JME
*************************************************************************/
#include <iostream> // cout/endl
#include <fstream>  // ifstream
#include <vector>   // vector
#include <iterator> // iterators

using namespace std;

int main()
{
	vector<int> Vector;

	// Attempt to open a text file containing int values separated by whitespace.
	ifstream ifs("input.txt");
	if (!ifs)
	{
		cerr << "Cannot open \"input.txt\" file.\n";
		return EXIT_FAILURE;
	}

	// Read numbers from file.
	copy(istream_iterator<int>(ifs), istream_iterator<int>(), back_inserter(Vector));
	
	// Output integers.
	copy(Vector.cbegin(), Vector.cend(), ostream_iterator<int>(cout, " "));
	cout << endl;

	return 0;
}
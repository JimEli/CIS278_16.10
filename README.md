# Pima CC CIS278 Week #7 
## Exercise 16.10 
### Reading Data From a File

Exercise 16.10 on page 755, C++ How to Program, 10/e, Deitel

Use an istream_iterator<int>, the copy algorithm and a back_inserter to read the contents of a text file that contains int values separated by whitespace. Place the int values into a vector of ints. The first argument to the copy algorithm should be the istream_iterator<int> object that’s associated with the text file’s ifstream object. The second argument should be an istream_iterator<int> object that's initialized using the class template istream_iterator’s default constructor--the resulting object can be used as an "end" iterator. After reading the file’s contents, display the contents of the resulting vector.

Notes:
* Uses text file "input.txt" located inside project folder.
* File "input.txt" contains the numerals 1 through 0, separated by a space.
* Compiled with MS Visual Studio 2017 Community (v141).
* Submitted in partial fulfillment of the requirements of PCC CIS-278.

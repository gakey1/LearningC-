#include <iostream>
#include <fstream>
using namespace std;

/*=====================================================================================
 *      FILE HANDLING
 * =====================================================================================
 * File handling is a way for your programs to store data permanently on your disk, and
 * retrieve when needed.
 * C++ handles files through it's Standard Template Library (STL). Here we mainly use
 * objects from the <fstream> library, which allows us to work with files through 3 main
 * classes:
 *          1.) `ifstream` for reading files.
 *          2.) `ofstream` for writing to files.
 *          3.) `fstream` for both reading and writing.
 *----------------------------------------------------------------------------------------
 *      Basic Concepts of File Handling
 * ----------------------------------------------------------------------------------------
 * 1.) Opening a file: Before you can read from or write to a file, you need to
 *      open it. You specify the mode (e.g. reading, writing).
 * 2.) Reading or writing: Once the file is open, you can read from it or write to it
 *     depending on the chosen mode.
 * 3.) Closing the File: After you're done with the file, you should close it and free up
 *      system resources.
 * ----------------------------------------------
 *  Below code: while (getline(inFile, line)) Code Explanation
 *  -----------------------------------------------
 *  Components of the Line
 *  1.) getline() Function: This is a standard library function used to read
 *  a line of text from an input stream (in this case, a file). It extracts
 *  characters from the input stream and stores them into the string variable provided,
 *  stopping when it reaches the end of the line. A line is considered to end when the
 *  newline character (\n) is encountered.
 *  2.) inFile: This is an instance of the ifstream class, which represents the
 *  input file stream that you're reading from. In this context, inFile is connected to
 *  the file "example.txt", and it's used here as the source from which getline() reads.
 *  3.) line: This is a string variable where the extracted line from the file will be
 *  stored. Each time getline() is called, it reads the next line of the file into this
 *  variable.
 *  Operation: The getline(inFile, line) function call attempts to read a line
 *  from inFile and stores it in line.
 *  Return Value: getline(): Return Value: getline() returns the same input stream
 *  it is given (inFile in this case) but in a state that can be evaluated as a boolean.
 *  The return value is considered true if the read operation was successful
 *  (i.e., it read some data and did not hit the end of the file or encounter an error).
 *  If it reaches the end of the file or if there's an error in reading from the file,
 *  the returned stream evaluates to false.
 *  While Loop Explanation
 *  Looping Mechanism:
 *  The while loop continues to execute as long as getline(inFile, line) returns true.
 *  This happens repeatedly for each line of the file until the end of the file is
 *  reached or an error occurs.
 *  Practical Usage: In practice, this means that the loop will:
 *  Read the first line and store it in line.
 *  Execute the body of the loop, which could involve processing or displaying
 *  the line (like cout << line << '\n';).
 *  Return to the while condition, where getline() reads the next line.
 *  Continue this process until there are no more lines to read, at
 *  which point getline() will fail (return false), and the loop will exit.
 * */

int main() {

    //WRITING TO FILE.  START:
    ofstream outFile;
    outFile.open("example.txt");

    if (outFile.is_open()){
        outFile << "Hello, this is a text file. \n";
        outFile << " Here is another line.\n";
        outFile.close();
    }else{
        cout << "unable to open file.\n";
    }
    // END

    // READING FROM A FILE. START
    ifstream inFile;
    inFile.open("example.txt");

    if (inFile.is_open()){
        string line;
        while (getline(inFile, line)) {
            cout << line << '\n';
        }
        inFile.close();
    } else{
        cout << "Unable to open file";
    }

    //END
    return 0;
}

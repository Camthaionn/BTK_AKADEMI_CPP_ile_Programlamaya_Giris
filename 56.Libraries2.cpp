

#include <iostream>
#include <fstream>

using namespace std;


int main()
{
    //The address of text
    string* write = new string;

    //Creates the file
    ofstream* folder = new ofstream("folder.txt");

    //Checks if the folder is exists
    if (folder->is_open()) {

        //Gets the input
        cin >> *write;

        //Text has been assigned
        *folder << *write;

        //Closed the folder
        folder->close();
    }
    
}

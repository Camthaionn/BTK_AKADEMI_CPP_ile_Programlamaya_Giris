

#include <iostream>
#include <string>

using namespace std;


int main()
{
    string test = " Hello string";

    //This adds string into the test variable
    test.insert(7, "dear ");
    
    //This adds string value end of the variable
    test.append(" bye");


    cout << test;
}

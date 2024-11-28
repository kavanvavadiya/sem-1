/*Write a C++ Program to check whether the given character is in lower case or upper case.
For a given input character output it's case as:  "lowercase"  or  "uppercase"  without the quotes.
If the input is not a part of the alphabet, then print  "this is not alphabet"  without the quotes.*/

#include<simplecpp>

main_program
{

    char c;
    cin >> c;  //character input by user

    if(c>='a' && c<='z')
        cout <<  "lowercase" << endl;
    else if(c>='A' && c<='Z')
        cout << "uppercase" << endl;
    else
        cout << "this is not alphabet" << endl;
    }


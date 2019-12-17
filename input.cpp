#include <iostream>

/**
 * Simple program demonstrating the difference between cin and getline
 */

using namespace std;

int main()
{
    // std::cin acts like java's next, nextInt, nextDouble, etc. It will only
    // store a token delimited by white space (new lines, tabs, and spaces).
    //
    // std::getline() acts like java's nextLine()

    int i, j;
    float f;
    double d;
    long l;
    string s; // notice string type is in namespace std

    cout << "Enter two integers: ";
    cin >> i >> j; // notice how two variables can be read by cin
    cout << "You entered " << i << " and " << j << endl;

    cout << "Enter a float: ";
    cin >> f;
    cout << "You entered " << f << endl;

    cout << "Enter a double: ";
    cin >> d;
    cout << "You entered " << d << endl;

    cout << "Enter a long: ";
    cin >> l;
    cout << "You entered " << l << endl;

    cout << "Enter a string (token): ";
    cin >> s; // notice white spaces end the input
    cout << "You entered \"" << s << "\"" << endl;

    // clear keyboard buffer
    getline(cin, s);

    cout << "Enter a string (line): ";
    getline(cin, s);
    cout << "You entered \"" << s << "\"" << endl;

    return 0;
}

#include <iostream>
#include <string>

using namespace std;

int main()
{
    cout << "Hello!" << endl;
    cout << "World..." << endl;


    // Print a triangle of stars
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}
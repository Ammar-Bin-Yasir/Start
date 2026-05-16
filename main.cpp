#include <iostream>
#include <string>

using namespace std;

int main()
{

    cout << "How many rows of stars do you want? ";
    int rows;
    cin >> rows;

    // Print a triangle of stars
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    // Inverted right triangle of stars
    for (int i = rows; i > 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    // Flipped right triangle of stars
    for (int i = 0; i < rows; i++)
    {
        // Spaces
        for (int j = rows - 1; j > i; j--)
        {
            cout << " ";
        }
        
        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    // Inverted Flipped triangle of stars
    for (int i = rows; i > 0; i--)
    {
        // Spaces
        for (int j = rows - 1; j >= i; j--)
        {
            cout << " ";
        }

        for (int j = 0; j < i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }


    // Pyramid of stars
    for (int i = 0; i < rows; i++)
    {
        // Spaces
        for (int j = rows - 1; j > i; j--)
        {
            cout << " ";
        }
        // Stars
        for (int j = 0; j < (2 * i + 1); j++)
        {
            cout << "*";
        }
        cout << endl;
    }       
    return 0;
}
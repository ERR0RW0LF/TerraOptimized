// Simple Voxel Viewer.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main() {
    // Deklaration einer 3x3 Matrix (3 Zeilen, 3 Spalten) vom Typ int
    int matrix[5][5];

    // Initialisierung der Matrix
    matrix[0][0] = 0;
    matrix[0][1] = 0;
    matrix[0][2] = 0;
    matrix[0][3] = 0;
    matrix[0][4] = 1;
    matrix[1][0] = 0;
    matrix[1][1] = 0;
    matrix[1][2] = 0;
    matrix[1][3] = 1;
    matrix[1][4] = 0;
    matrix[2][0] = 0;
    matrix[2][1] = 0;
    matrix[2][2] = 1;
    matrix[2][3] = 0;
    matrix[2][4] = 0;
    matrix[3][0] = 0;
    matrix[3][1] = 1;
    matrix[3][2] = 0;
    matrix[3][3] = 0;
    matrix[3][4] = 0;
    matrix[4][0] = 1;
    matrix[4][1] = 0;
    matrix[4][2] = 0;
    matrix[4][3] = 0;
    matrix[4][4] = 0;

    // Ausgabe der Matrix
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (matrix[i][j] == 0) {
                cout << "  ";
            }
            else if (matrix[i][j] == 1) {
                cout << (unsigned char)219 << (unsigned char)219;
            }
        }
        cout << endl; // Neue Zeile nach jeder Zeile der Matrix
    }

    
    std::cout << "        " << (unsigned char)219 << (unsigned char)219 << (unsigned char)219 << (unsigned char)219 << "        " << "\n";
    std::cout << "      ██    ██      " << "\n";
    std::cout << "    ██        ██    "
        << "\n" << "  ██            ██  "
        << "\n" << "██                ██"
        << "\n" << "██                ██"
        << "\n" << "████            ████"
        << "\n" << "██  ██        ██  ██"
        << "\n" << "██    ██    ██    ██"
        << "\n" << "██      ████      ██"
        << "\n" << "██      ████      ██"
        << "\n" << "██      ████      ██"
        << "\n" << "██      ████      ██"
        << "\n" << "██      ████      ██"
        << "\n" << "██      ████      ██"
        << "\n" << "  ██    ████    ██  "
        << "\n" << "    ██  ████  ██    "
        << "\n" << "      ████████      "
        << "\n" << "        ████        ";
    /*
    0 0 0 0 1 1 0 0 0 0        ████
    0 0 0 1 0 0 1 0 0 0      ██    ██
    0 0 1 0 0 0 0 1 0 0    ██        ██
    0 1 0 0 0 0 0 0 1 0  ██            ██
    1 0 0 0 0 0 0 0 0 1██                ██
    1 0 0 0 0 0 0 0 0 1██                ██
    1 1 0 0 0 0 0 0 1 1████            ████
    1 0 1 0 0 0 0 1 0 1██  ██        ██  ██
    1 0 0 1 0 0 1 0 0 1
    1 0 0 0 1 1 0 0 0 1
    1 0 0 0 1 1 0 0 0 1
    1 0 0 0 1 1 0 0 0 1
    1 0 0 0 1 1 0 0 0 1
    1 0 0 0 1 1 0 0 0 1
    1 0 0 0 1 1 0 0 0 1
    0 1 0 0 1 1 0 0 1 0
    0 0 1 0 1 1 0 1 0 0
    0 0 0 1 1 1 1 0 0 0
    0 0 0 0 1 1 0 0 0 0
    */
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file

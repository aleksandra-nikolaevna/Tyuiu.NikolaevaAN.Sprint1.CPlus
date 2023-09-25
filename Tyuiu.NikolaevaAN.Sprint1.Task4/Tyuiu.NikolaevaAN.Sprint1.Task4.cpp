// Tyuiu.NikolaevaAN.Sprint1.Task4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "../Tyuiu.NikolaevaAN.Sprint1.Task4.Lib/Tyuiu.NikolaevaAN.Sprint1.Task4.Lib.cpp"
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    cout << "Николаева\a\t" << "Александра\t" << "Николаевна\n";
    cout << endl;
    cout << "Task4\n" << endl;
    cout << "Введите число x: ";
    float x;
    cin >> x;
    cout << endl;

    ISprint1Task4V1* date = new ISprint1Task4V1();
    if (x > 0 and x != 8)
        cout << "y = " << 1 - 3 * (date->Vibor(x));
    else if (x <= 1)
        cout << "y = " << date->Vibor(x) * date->Vibor(x) - sin(date->Vibor(x));
    else
        cout << "y = " << cos(date->Vibor(x));
    cout << endl;
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

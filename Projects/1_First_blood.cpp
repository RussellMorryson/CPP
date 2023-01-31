#include <iostream>
using namespace std;
int main()
{
    // без выражения цикла (третье выражение пропущено) 
    for (char UserSelection = 'm'; UserSelection != 'x'; )
    {
        cout << "Enter the two integers: " << endl;
        int Numl = 0, Num2 = 0;
        cin >> Numl;
        cin >> Num2;
        cout << Numl << " x " << Num2 << " = " << Numl * Num2 << endl;
        cout << Numl << " + " << Num2 << " = " << Numl + Num2 << endl;
        cout << "Press x to exit or any other key to recalculate" << endl;
        cin >> UserSelection;       
    }  
    cout << "Goodbye!" << endl;
    return 0;  
}

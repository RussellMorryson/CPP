#include <iostream>
using namespace std;
int main()
{
    for(;;)
    {
        cout << "Enter two integers: "
    }
    
    
    cout << "Do you wish to correct the numbers? (y/n): ";
    char ChangeNumbers = '\0 '; 
    cin >> ChangeNumbers;
if (ChangeNumbers == ' y ’)
continue; // перезапуск цикла!
cout << "Press x to exit or any other key to recalculate" << endl;
char UserSelection = *\0';
cin » UserSelection;
if (UserSelection == 'x')
break; // выход из бесконечного цикла
}
cout << "Goodbye!" << endl;
return 0;
}
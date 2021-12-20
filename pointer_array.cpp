#include <iostream>
using namespace std;
int main()
{
    int array[5], i;
    int *ptr = &array[0];
    cout << "Enter elements: ";
    for (i = 0; i < 5; i++)
    {
        cin >> array[i];
    }
    cout << endl
         << "You entered: ";
    for (i = 0; i < 5; i++)
    {
        cout << *ptr << " ";
        *ptr++;
    }
    return 0;
}
//created by Ankita Mohan

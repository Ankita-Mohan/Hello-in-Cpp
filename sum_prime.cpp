#include <iostream>
#include <cmath>
using namespace std;
int Prime(int num)
{
    int i, inum, prime = 1;

    inum = sqrt(num);

    for (i = 2; i <= inum; i++)
    {
        if (num % i == 0)
        {
            prime = 0;
            break;
        }
    }

    return (prime);
}
int nextPrime(int num)
{
    do
    {
        num++;
    } while (!Prime(num));

    return (num);
}
int main()
{
    int num, i, flag = 0;

    cout << "Enter a positive integer: ";
    cin >> num;

    for (i = 2; i <= (num - i); i = nextPrime(i))
    {
        if (Prime(num - i))
        {
            flag = 1;
            cout << endl
                 << i << "+" << num - i << "= " << num;
        }
    }

    if (flag == 0)
    {
        cout << num << "cannot be expressed as the sum of 2 prime numbers";
    }

    return 0;
}
//created by Ankita Mohan

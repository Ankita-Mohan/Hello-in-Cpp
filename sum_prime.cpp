#include <iostream>
#include <cmath>
using namespace std;
int Prime(int num)
{
    int count, inum, prime = 1;

    inum = sqrt(num);

    for (count = 2; count <= inum; count++)
    {
        if (num % count == 0)
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
    int num, count, flag = 0;

    cout << "Enter a positive integer: ";
    cin >> num;

    for (count = 2; count <= (num - count); count = nextPrime(count))
    {
        if (Prime(num - count))
        {
            flag = 1;
            cout << endl
                 << count << "+" << num - count << "= " << num;
        }
    }

    if (flag == 0)
    {
        cout << num << "cannot be expressed as the sum of 2 prime numbers";
    }

    return 0;
}
//created by Ankita Mohan

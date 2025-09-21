#include <iostream>
using namespace std;

int main()
{
    int range = 3;
    int num = 1;
    for (int i = 1; i <= range; i++)
    {
        for (int j = 1; j <= range; j++)
        {
            cout << num << " ";
            num++;
        }
        cout << "\n";
    }
    cout << "\n";
    char ch = 'A';
    for (int i = 1; i <= range; i++)
    {
        for (int j = 1; j <= range; j++)
        {
            cout << ch << " ";
            ch++;
        }
        cout << "\n";
    }
    return 0;
}
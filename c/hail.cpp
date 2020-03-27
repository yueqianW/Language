// main.cpp
#include <iostream>
using namespace std;

// int main()
// {
//     int result;
//     int a = 2;
//     int b = 3;
//     result = a + b;
//     cout << result << endl;
//     return 0;
// }

int hail(int n)
{
    int length = 1;
    while (n > 1)
    {
        (n % 2) ? n = 3 * n + 1 : n / 2;
        length++;
        return 0;
    }
}


int main()
{
    int n=7,result;
    cin >>n;
    result = hail(n);
    cout << "result: " << result;
    return 0;
}
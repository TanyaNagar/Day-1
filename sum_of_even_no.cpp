#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int i = 2;
    int sum = 0;
    while (i <= n)
    {
        sum = sum + i;
        i += 2;
    }
    cout << "The sum of even no. is : " << sum << endl;
    return 0;
}
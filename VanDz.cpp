#include <iostream>

using namespace std;

void towerOfHN(int n, char from, char to, char aux)
{
    if (n == 1)
    {
        cout << "Move disk " << n << " from " << from << " to " << to << '\n';
        return;
    }
    towerOfHN(n - 1, from, aux, to);
    cout << "Move disk " << n << " from " << from << " to " << to << '\n';
    towerOfHN(n - 1, aux, to, from);
}

int main()
{
    int n = 3;
    towerOfHN(n, 'A', 'B', 'C');
    return 0;
}
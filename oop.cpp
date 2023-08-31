#include <iostream>
using namespace std;

class Hero
{
public:
    int n = 5;
};

int main()
{
    Hero h1;
    cout << sizeof(h1);
    return 1;
}
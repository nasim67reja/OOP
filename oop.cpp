#include <iostream>
using namespace std;

// class Hero
// {
// private:
//     int age;

// public:
//     string name;
//     Hero()
//     {
//         cout << "Constructor called" << endl;
//     }
//     Hero(int a)
//     {
//         this->age = a; // this refer to the object's location who is call the constructor
//     }
//     int setAge(int a)
//     {
//         age = a;
//     }
//     int getAge()
//     {
//         return age;
//     }
// };

// int main()
// {
//     Hero *h1 = new Hero(24);
//     h1->name = "John Doe";
//     cout << h1->getAge() << endl;

//     h1->setAge(26);
//     cout << h1->getAge() << endl;

//     // for (int i = 0; i < 7; i++)
//     // {
//     //    cout<<"num"<<i;
//     // }

//     return 1;
// }

class Hero
{
private:
    int health;
    char level;

public:
    Hero(int h, char l)
    {
        this->health = h;
        this->level = l;
    }
    void getData()
    {
        cout << "Health: " << health << ", Level: " << level << endl;
    }
};

int main()
{
    Hero *h1 = new Hero(20, 'a');
    h1->getData();
    return 1;
}
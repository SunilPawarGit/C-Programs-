#include<iostream>
using namespace std;
class Base
{
private:
    int i , j;
    public :
        Base()
        {

        }
    void display()
    {
        cout<<"In Base Class Using Derrived Class"<<endl;
    }

};

class Derrived : public Base
{

public:

};

int main()
{

    Derrived d;
    d.display();

    return 0;
}

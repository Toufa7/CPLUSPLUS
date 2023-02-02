#include <iostream>
#include <string>

using namespace std;

class Departement
{
    private:
        int     capacity;
        string  name;
    public:
        Departement(int cap, string nae)
        {
            this->name = nae;
            capacity = cap; 
        }
        void    Hi()
        {
            cout << "Capacity " << this->capacity << " Departement " << this->name << endl;
        }


};

// int main()
// {
//     Departement Emines(300, "Emines");
//     Emines.Hi();
// }

/**
    * ! If we do not explicitly initialize a member in the constructor initializer list
    * ! that member is default initialized before the constructor
*/


int main()
{

}
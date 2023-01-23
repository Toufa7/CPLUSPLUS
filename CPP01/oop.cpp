#include <iostream>
#include <string>

using namespace std;

class Car
{
    private:
        struct year
        {
            int a;
        }   obj;
        string  model;
    public:
        string getmodel()
        {
            return (this->model);
        }
        void    setmodel(string mode)
        {
            Car *e = this;
            e->model = mode;
        }
        int getyear()
        {
            return (this->obj.a);
        }
        void    setyear(int yea)
        {
            this->obj.a = yea;
        }
};

int main()
{
    Car car_1;

    car_1.setmodel("Tessla");

    car_1.setyear(2011);

    // Here i used to specify that the cout variable is defined in the std namespace.
    std::cout << car_1.getmodel() << " " << car_1.getyear();
}
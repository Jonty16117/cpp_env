#include <iostream>

using namespace std;

class Chef{
    public:
        void makeChicken(){
            cout << "The chef makes chicken." << endl;
        }
        void makeSalad(){
            cout << "The chef makes salad."<< endl;
        }
        void makeSpecialDish(){
            cout << "The chef makes special dish."<< endl;
        }
};

class ItalienChef : public Chef{
    public:
        void makePasta(){
            cout << "The chef makes pasta."<< endl;
        }
        void makeSpecialDish(){
            cout << "The chef makes Pizza."<< endl;
        }

};

int main()
{
    Chef chef;
    chef.makeSpecialDish();
    ItalienChef italienChef;
    italienChef.makeSpecialDish();
    return 0;
}
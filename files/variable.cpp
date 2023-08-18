#include <iostream>

using namespace std;
int main()
{
    
    string charName = "Johan";
    string newName = "chutiya";
    int charAge = 23423;
    // int Arr_1[];
    int *Arr_2[] = {&charAge, &charAge, &charAge, &charAge};
    cout << *&(*Arr_2[1]) << endl;
    //24;
    /*cout << "His name is " << charName << endl;
    cout << "He is " << charAge << endl;
    cout << "He is " << newName << ", that's who ankit is" << endl;
    */
    // string *pcharAge = &charAge;
    // cout << pcharAge<< endl; 
    // cout << charAge<< endl;
    return 0;
}
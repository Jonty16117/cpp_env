#include <iostream>

using namespace std;

class Student{
    public:
        string name;
        string major;
        double gpa;

        // a = Null

        

        Student(string aName, string aMajor, double aGpa){
            name = aName;
            major = aMajor;
            gpa = aGpa;
        }

        bool hasHonors(){
            if (gpa <= 2){
                return true;
            }
            return false;
        }

};

int main()
{
    Student student1("Andrew", "Electronics", 2.1);
    Student student2("Jacob", "Philosophy", 1.3);

    cout << student2.hasHonors() << endl;

    return 0;
}
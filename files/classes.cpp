#include <iostream>

using namespace std;

class Book {
    public:
        string title;
        string author;
        int pages;
        Book(string atitle, string aauthor, int apages){
            title = atitle;
            author = aauthor;
            pages = apages;
            cout << title << ", " << author << ", "<< pages << endl;
        }
};
int main(){
    Book book1("Think and Grow Rich", "Napolean Hill", 320);
    Book book2("Monk who Sold his Ferrari", "Robin Sharma", 280);

    //cout << book1.pages<< endl;    
    return 0;
}
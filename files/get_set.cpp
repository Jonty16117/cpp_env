#include <iostream>

using namespace std;

class Movie{
    public:
        string title;
        string director;
        string rating;
        Movie(string aTitle, string aDirector, string aRating){
            title = aTitle;
            director = aDirector;
            setRating(aRating);
        }

        void setRating(string aRating){
            if(aRating == "G" || aRating == "PG" || aRating == "PG-13" || aRating == "R" || aRating == "NR" ){
                rating = aRating;
            } else{
                rating = "NR";
            }
        }

        string getRating(){
            return rating;
        }

};

int main()
{
    Movie avengers("The Avengers", "John Whedon", "PG-13");
    cout << avengers.getRating()<< endl;
    return 0;
}
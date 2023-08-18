#include <iostream>

using namespace std;

string getDayOfWeek(int dayNum){
    string dayName;

    switch(dayNum){
        case 0:
            dayName = "Sonntag";
            break;
        case 1:
            dayName = "Montag";
            break;
        case 2:
            dayName = "Dienstag";
            break;
        case 3:
            dayName = "Mittwoch";
            break;
        case 4:
            dayName = "Donnerstag";
            break;
        case 5:
            dayName = "Freitag";
            break;
        case 6:
            dayName = "Samstag";
            break;
        default:
            dayName = "Ungültige Zahl";
    }
    return dayName;
}

int main(){
    
    cout <<getDayOfWeek(5)<< endl;
    return 0;

}

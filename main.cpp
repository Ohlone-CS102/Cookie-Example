#include <iostream>
#include <iomanip>
#include <string>

using namespace std;
int main() {
    const double SUGAR_PER_COOKIE = 0.03125;
    const double BUTTER_PER_COOKIE = 0.020832;
    const double FLOUR_PER_COOKIE = 0.05729;

    int numberOfCookies = 0;
    string lowFat, lowSugar;
    double recipeFlour, recipeSugar, recipeButter;
    recipeFlour = recipeSugar = recipeButter = 0;

    // Describe the program
    cout << "This program will return the amount of "
     << "ingredients needed to make cookies" << endl;

    // get input
    cout << "How many cookies would you like to make?";
    cin >> numberOfCookies;

    cout << "Do you want low-fat cookies?" << endl;
    cin >> lowFat;

    cout << "Do you want low-cal cookies?" << endl;
    cin >> lowSugar;

    // calculate ingredient amounts
    recipeFlour = numberOfCookies * FLOUR_PER_COOKIE;

    if (lowSugar.compare("Y") == 0 || lowSugar.compare("y") == 0) {
        recipeSugar = numberOfCookies * SUGAR_PER_COOKIE * 0.5;
    } else {
        recipeSugar = numberOfCookies * SUGAR_PER_COOKIE;
    }

    if (lowFat.compare("Y") == 0 || lowFat.compare("y") == 0) {
        recipeButter = numberOfCookies * BUTTER_PER_COOKIE * 0.5;
    } else {
        recipeButter = numberOfCookies * BUTTER_PER_COOKIE;
    }

    // output the results

    cout << fixed << setprecision(2) << recipeSugar << " Sugar" << endl;
    cout << recipeButter << " Butter" << endl;
    cout << recipeFlour << " Flour" << endl;
    cout << "--------------------" << endl;
    cout << "Makes " << numberOfCookies << " cookies!";

    return 0;
}

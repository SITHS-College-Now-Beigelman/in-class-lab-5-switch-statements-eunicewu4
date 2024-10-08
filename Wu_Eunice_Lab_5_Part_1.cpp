//Eunice Wu 
//October 8, 2024
//Lab 5 Pt 1

#include <iostream>
#include <iomanip>

using namespace std;
int main () {

// Part a
    int exercise;
    double weight;
    double min;
    double burn;
    
    //Ask user what type of exercise they did so they can output the correct cal burn for different cases. 
    cout << "What exercise did you do?" <<"\n"
        << "Walked slowly (Enter 1)" <<"\n"
        << "Walked quickly (Enter 2)" << "\n"
        << "Jogged (Enter 3)" << "\n";
    cin >> exercise;

    //Ask and stores other values to help calculate cal burned
    cout << "What is your weight in kilograms? ";
    cin >> weight;

    cout << "How long did you exercise in minutes? ";
    cin >> min;

    //Depending on user inputted exercise, will show differnt calories burned
    switch (exercise) {
        case 1:
            cout << "If you walked slowly, you burned " << (min*2*3.5*weight)/200 << " calories."<< endl;
            break;
        case 2:
            cout << "If you walked quickly, you burned " << (min*3*3.5*weight)/200 << " calories."<< endl;
            break;
        case 3:
            cout << "If you joggged, you burned " << (min*8.8*3.5*weight)/200 << " calories."<< endl;
            break;
        }
// Part b

    //Ask user how much they want to burn
    cout << "How much calories would you like to burn? ";
        cin >> burn;

    //Based on numbers given before and now, will calculate the time needed to burn user inputted calories
    switch (exercise) {
        case 1:
            cout << "You need to exercise this much minutes: " << fixed << setprecision(2) << (200*burn)/(2*3.5*weight)<< endl;
            break;
        case 2:
            cout << "You need to exercise this much minutes: "  << (200*burn)/(3*3.5*weight)<< endl;
            break;
        case 3:
            cout << "You need to exercise this much minutes: " << (200*burn)/(8.8*3.5*weight) << endl;
            break;
        }

    return 0;
}
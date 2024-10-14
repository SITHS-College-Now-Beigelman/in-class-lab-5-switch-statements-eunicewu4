//Eunice Wu 
//October 14, 2024
//Lab 5 Pt 2

#include <iostream>
#include <iomanip>

using namespace std;
int main () {

 // Pre-declares variable for user-inputted GB amount to be stored and later used to calculate number of hours of different types of music they can stream
    double userGB;
    int quality; 

// Step 1: Ask user how much GB in their monthly hotspot
    cout << "How many gigabytes do you have in your monthly hotspot plan? ";
    cin >> userGB;
    cout << endl;

// Ask user what type of music they want to download. 
    cout << "What quality music do you want to download" <<"\n"
        << "Low (Enter 1)" <<"\n"
        << "Normal (Enter 2)" << "\n"
        << "High (Enter 3)" << "\n";
    cin >> quality;

// Convert GB to MB to make math easier 
    double userMB;
    userMB = userGB*1000;
// Case statements that prints differnt hours using different math for user inputted music quality
      switch (quality) {
        case 1:
    cout << "For low quality music, you can download this much hours: " << fixed << setprecision(2) << userMB/43.2 << endl;
            break;
        case 2:
    cout << "For normal quality music, you can download this much hours: " << fixed << setprecision(2) << userMB/72 << endl;
            break;
        case 3:
    cout << "For high-quality music, you can download this much hours: " << fixed << setprecision(2) << userMB/115.2 << endl;
            break;
        }

    return 0;
}
/*How many gigabytes do you have in your monthly hotspot plan? 100

What quality music do you want to download
Low (Enter 1)
Normal (Enter 2)
High (Enter 3)
3
For high-quality music, you can download this much hours: 868.06
*/

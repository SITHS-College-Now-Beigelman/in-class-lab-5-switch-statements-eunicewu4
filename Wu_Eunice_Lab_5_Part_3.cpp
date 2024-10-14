//Eunice Wu 
//October 8, 2024
//Lab 5 Pt 3

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>

using namespace std;
int main () {

// Part 1
    int Xaxis=0;
    int Yaxis=0;
    int direct; 
    srand(time(0));

for (int i=0; i<25; i++) {
    direct= rand() % 4 +1;
        switch(direct) {
            case 1:
                Yaxis = Yaxis + 1; // N
                break;
            case 2:
                Yaxis = Yaxis - 1; // S
                break;
            case 3:
                Xaxis = Xaxis + 1; // E
                break;
            case 4:
                Xaxis = Xaxis - 1; // W
                break;
        }
  // Prints out the current location of teh robot for each step
    cout << "Step " << i+1 << ": ";
    if (Yaxis > 0)
        cout << Yaxis << " Block North, ";
    else if (Yaxis < 0)
        cout << -Yaxis << " Block South, ";
    else
        cout << "Middle of North and South, ";

    if (Xaxis > 0)
        cout << Xaxis << " Block East. "<<endl;
    else if (Xaxis < 0)
        cout << -Xaxis << " Block West. "<<endl;
    else
        cout << "Robot in middle of East and West. "<<endl;
        
    cout <<endl;
    }

// Part 2
int step = 0; // Resets values
Xaxis=0;
Yaxis=0;

while (Xaxis !=2 || Yaxis !=3) { //while loop so comp will stop counting how many steps once it get to target X & Y
    direct= rand() % 4 +1;
    switch(direct) {
        case 1:
            Yaxis = Yaxis + 1;
            break;
        case 2:
            Yaxis = Yaxis - 1;
            break;
        case 3:
            Xaxis = Xaxis + 1;
            break;
        case 4:
            Xaxis = Xaxis - 1;
            break;
        }
    step = step +1; // tallys up the steps each run carried out not reaching the target
} // Once loops breaks as target is meet, it will print the amount of steps
cout << "How many steps it took to get 2 blocks east and 3 blocks north: " << step << endl;

// Extra Credit 

double avg= 0; // avg is double because it will be divided by 10 later

for (int i=0; i<10; ++i) { // loop will continue 10 times
    step = 0; // set values back to 0 for each repeat
    Xaxis=0;
    Yaxis=0;

    while (Xaxis !=2 || Yaxis !=3) {
        direct= rand() % 4 +1;
        switch(direct) {
            case 1:
                Yaxis = Yaxis + 1;
                break;
            case 2:
                Yaxis = Yaxis - 1;
                break;
            case 3:
                Xaxis = Xaxis + 1;
                break;
            case 4:
                Xaxis = Xaxis - 1;
                break;
            }
        step = step +1;
        }
    avg = avg + step; //sums up all the 10 avgs 
}
cout << "Avg steps to get 2 blocks east and 3 blocks north: " << avg/10; // calculate and prints the avg

    return 0;
}

/*Step 1: Middle of North and South, 1 Block East. 

Step 2: Middle of North and South, 2 Block East. 

Step 3: 1 Block North, 2 Block East. 

Step 4: 2 Block North, 2 Block East. 

Step 5: 3 Block North, 2 Block East. 

Step 6: 2 Block North, 2 Block East. 

Step 7: 2 Block North, 1 Block East. 

Step 8: 2 Block North, Robot in middle of East and West. 

Step 9: 2 Block North, 1 Block East. 

Step 10: 3 Block North, 1 Block East. 

Step 11: 4 Block North, 1 Block East. 

Step 12: 3 Block North, 1 Block East. 

Step 13: 2 Block North, 1 Block East. 

Step 14: 3 Block North, 1 Block East. 

Step 15: 3 Block North, Robot in middle of East and West. 

Step 16: 3 Block North, 1 Block West. 

Step 17: 3 Block North, 2 Block West. 

Step 18: 4 Block North, 2 Block West. 

Step 19: 3 Block North, 2 Block West. 

Step 20: 3 Block North, 3 Block West. 

Step 21: 4 Block North, 3 Block West. 

Step 22: 3 Block North, 3 Block West. 

Step 23: 3 Block North, 2 Block West. 

Step 24: 3 Block North, 3 Block West. 

Step 25: 4 Block North, 3 Block West. 

How many steps it took to get 2 blocks east and 3 blocks north: 27
Avg steps to get 2 blocks east and 3 blocks north: 21101
*/
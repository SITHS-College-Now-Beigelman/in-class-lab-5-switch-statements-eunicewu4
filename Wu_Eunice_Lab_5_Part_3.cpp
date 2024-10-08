//Eunice Wu 
//October 8, 2024
//Lab 5 Pt 3

#include <iostream>
#include <string>
#include <iomanip>
#include <cstdlib>
#include <ctime>

using namespace std;
int main () {
srand(time(0));
int Xaxis;
int Yaxis;
int i=0;
int direct; 

for (i=0; i<25; i++) {
    direct= rand() % 4 +1;

    if (direct == 1)
    Yaxis = Yaxis + 1;
    else if (direct ==2 )
    Yaxis = Yaxis - 1;
    else if (direct ==3 )
    Xaxis = Xaxis + 1;
    else
    Xaxis = Xaxis - 1;

    if (Yaxis > 0)
    cout << Yaxis << "Blocks North" <<endl;
else if (Yaxis < 0)
    cout << -Yaxis << "Blocks South"<<endl;
else
    cout << "Robot in middle of North and South"<<endl;
if (Xaxis > 0)
    cout << Xaxis << "Blocks West"<<endl;
else if (Xaxis < 0)
    cout << -Xaxis << "Blocks East"<<endl;
else
    cout << "Robot in middle of East and West"<<endl;

}







    return 0;
}
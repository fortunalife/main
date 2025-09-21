#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    int playerX, playerY;  // coordinates thing
    int monsterX, monsterY;  // monster coords

    // player input for coords
    cout << "Player x: ";
    cin >> playerX;
    cout << "Player y: ";
    cin >> playerY;
    cout << endl;

    // monster input for coords
    cout << "Monster x: ";
    cin >> monsterX;
    cout << "Monster y: ";
    cin >> monsterY;
    cout << endl;

    // calculation
    int xDist = abs(playerX - monsterX);  // x axis
    int yDist = abs(playerY - monsterY);  // y axis
    int manDist = xDist + yDist;  // manhattan
    double eucDist = sqrt(pow(playerX - monsterX, 2) + pow(playerY - monsterY, 2));  // euclidean

    // header
    cout << "Distances from Player to Monster:\n" << endl;

    // x axis distance
    cout << left << setw(7) << "X-Axis:" << right << setfill('.')
        << setw(15) << xDist << endl;
    cout << "p" << setfill('-') << setw(xDist) << "" << "m" << endl << endl;

    // y axis distance
    cout << left << setfill(' ') << setw(7) << "Y-Axis:" << right << setfill('.')
        << setw(15) << yDist << endl;
    cout << "p" << setfill('-') << setw(yDist) << "" << "m" << endl << endl;

    // manhattan distance
    cout << left << setfill(' ') << setw(10) << "Manhattan:" << right << setfill('.')
        << setw(12) << manDist << endl;
    cout << "p" << setfill('-') << setw(manDist) << "" << "m" << endl << endl;

    // euclidean distance output
    cout << left << setfill(' ') << setw(10) << "Euclidean:" << right << setfill('.')
        << setw(12) << fixed << setprecision(2) << eucDist << endl;
    cout << "p" << setfill('-') << setw(static_cast<int>(eucDist)) << "" << "m" << endl << endl;

    return 0;
}
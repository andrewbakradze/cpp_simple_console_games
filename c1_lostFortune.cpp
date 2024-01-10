#include<iostream>
using namespace std;

int main()
{
	const int ALIEN_POINTS = 150;
	int aliensKilled = 10;
	int score = aliensKilled * ALIEN_POINTS;
	cout << "score: " << score << endl;
    enum dificulty {NOVICE, EASY, NORMA, HARD, UNBEATABLE};
    dificulty myDifficulty = EASY;
    cout << myDifficulty << endl;
    enum shipCost {FIGHTER_COST = 25, BOMBER_COST, CRUISER_COST = 50};
    shipCost myShipCost = BOMBER_COST;
    cout << myShipCost;
    cout << "\nTo upgrade my ship to a Cruiser will cost " << (CRUISER_COST - myShipCost) << " Resource Points.\n";
    return 0;


}
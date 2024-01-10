#include<iostream>
using namespace std;

int main()
{
	const int GOLD_COUNT = 1000;
    int adventurers, killed, survivors;
    string userName;
    cout << "Welcome to the lost paradise island!" << "\n\n" << "Please enter the following for your personalized adventure\n";
    cout << "what is your name wanderer?" << endl;
    cin >> userName;
    cout << "Enter a number: ";
    cin >> adventurers;
    cout << endl << "Enter a number. smaller than the first: " << endl;
    cin >> killed;
    survivors = adventurers - killed;
    cout << "A brave group of" << adventurers << " set out on a quest "; 
    cout << "-- in search of the lost treasure of the Ancient Dwarves. "; 
    cout << "The group was led Ьу that legendary capitan. " << userName << ". \n"; 
    cout << "\nAl ong the way. a band of marauding ogres ambushed the party. "; 
    cout << "All fought bravely under the command of " << userName;
    cout << ". and the ogres were defeated. but at a cost. "; 
    cout << "Of the adventurers. " << killed << " were vanqui shed. ";
    cout << "leaving just "<< survivors <<" in the group.\n";
    cout << "\nThe party was about to give up all hope. "; 
    cout << "But while laying the deceased to rest. ";
    cout << "they stumbled upon the buried fortune. ";
    cout << "So the adventurers split "<< GOLD_COUNT <<" gold pieces.";
    cout << userName <<" held on to the extra "<< (GOLD_COUNT % survivors); 
    cout <<" pieces to keep things fair of course.\n";
    return 0; 
}
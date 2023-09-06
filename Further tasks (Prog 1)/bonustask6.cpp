#include <iostream>
#include <fstream>
#include <sstream>
#include <cstring>
#include <iomanip>
#include <vector>
using namespace std;

class Player {
    protected:
    string name;
    int price;

    public:
    Player(string name="", int price=0): name(name), price(price) {}

    string toString() {
        return "The player name is " + name + " and is worth $" + to_string(price) + " \n";
    }

    void showInfo() {
        cout << toString();
    }

    friend class Club;
};

class Club {
    protected:
    string clubName;
    int budget;
    vector<Player> players;

    public:
    Club(string clubName="", int budget=0, vector<Player> players = {}):
        clubName(clubName), budget(budget), players(players) {}

    string toString() {
        return "The club name is " + clubName + " and has a budget of" + to_string(budget) + "\n";
    }

    void showClubInfo() {
        cout << toString();
    }

    friend class Player;
};
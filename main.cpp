#include <iostream>
#include <string>

using namespace std;

class NimGame{
private:
    bool ValidInput(int);
    int matches = 24;
public:
    void StartupMessage();
    void DisplayMatches();
    int GetMatches();
    int playerRemoves;
    void PlayGame();
};

int main(){
    NimGame nim;
    nim.StartupMessage();
    nim.DisplayMatches();
}

void NimGame::StartupMessage() {
    cout << "New game of Nim Game!" << endl << endl;
    cout << "Matches left: " << matches << endl;
};

void NimGame::PlayGame(){
    int playerInput;
    do {
        cout << "How many do you want to remove? 1-3 is allowed." << endl;
        cin >> playerInput;
    }
    while(!ValidInput(playerInput));
}

bool NimGame::ValidInput(int value){
    return (value > 0 && value < 4);
}

int NimGame::GetMatches(){
    return matches;
}

void NimGame::DisplayMatches(){
    for (int i = 0; i < GetMatches(); i++) {
        cout << "|";
    }
    cout << endl;
}


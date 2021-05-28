#include <iostream>
#include <string>

using namespace std;

class NimGame{
private:
    string DisplayMatches();
    int matches = 24;
public:
    void StartupMessage();
    bool ValidInput(int);
    int GetMatches();
    void PlayerInput();
    void PlayerRemoveMatches(int);
    void ShowMatches();
};

int main(){
    NimGame nim;
    nim.StartupMessage();

    while (nim.GetMatches() > 0){
        cout << "Player1" << endl;
        nim.PlayerInput();
        if (nim.GetMatches() <= 0){
            cout << "Player1 YOU SUCK!";
            break;
        }
        nim.ShowMatches();

        cout << "Player2" << endl;
        nim.PlayerInput();
        if (nim.GetMatches() <= 0){
            cout << "Player2 YOU SUCK!";
            break;
        }
        nim.ShowMatches();
    }
}

void NimGame::StartupMessage() {
    cout << "New game of Nim Game!" << endl << endl;

};

void NimGame::PlayerInput(){
    int playerInput;
    do {
        cout << "How many do you want to remove? 1-3 is allowed : " << endl;
        cin >> playerInput;
    }
    while(!ValidInput(playerInput));
    PlayerRemoveMatches(playerInput);
}

void NimGame::PlayerRemoveMatches(int value){
    matches -= value;
}

bool NimGame::ValidInput(int value){
    return value > 0 && value < 4;
}

string NimGame::DisplayMatches(){
    string response = "";
    for (int i = 0; i < GetMatches(); i++) {
        response += "|";
    }
    return response;
}

int NimGame::GetMatches(){
    return matches;
}

void NimGame::ShowMatches() {
    cout << endl;
    cout <<"Remaining matches: " << DisplayMatches() << endl << endl;
}




#include <iostream>

using namespace std;

// These are constants used throughout the game
char USER = 'X';
char COMP = 'O';
char EMPTY = '_';
char DRAW = 'D';

char NW = EMPTY;
char W = EMPTY;
char SW = EMPTY;
char N = EMPTY;
char C = EMPTY;
char S = EMPTY;
char NE = EMPTY;
char E = EMPTY;
char SE = EMPTY;

int TOTAL_MOVES = 9;

/**
 * Utility function to print the current status of the board
 */
void printBoard(){
    cout << endl << NW << " " << N << " " << NE << endl <<
    W << " " << C << " " << E << endl <<
    SW << " " << S << " " << SE << endl << endl;
}

/**
 * Randomly selects an empty cell from NW, W, SW, N, C, S, NE, E, SE
 * If chosen cell is not empty, function is recursively called until empty cell is chosen
 * @return a string representing the chosen cell
 */
string chooseRandomCell() {
    int randomNum = rand() % 9;

    if (randomNum == 0 && NW == EMPTY) {
        return "NW";
    } else if (randomNum == 1 && W == EMPTY) {
         return "W";
    } else if (randomNum == 2 && SW == EMPTY) {
        return "SW";
    } else if (randomNum == 3 && N == EMPTY) {
        return "N";
    } else if (randomNum == 4 && C == EMPTY) {
        return "C";
    } else if (randomNum == 5 && S == EMPTY) {
        return "S";
    } else if (randomNum == 6 && NE == EMPTY) {
        return "NE";
    } else if (randomNum == 7 && E == EMPTY) {
        return "E";
    } else if (SE == EMPTY) {
        return "SE";
    } else {
        return chooseRandomCell();
    }
}

/**
 * Sets the string represented by chosenCell to the character represented by the char player
 * @param chosenCell valid, empty cell among NW, W, SW, N, C, S, NE, E, SE
 * @param player X or O
 */
void setCell(string chosenCell, char player) {
    if (chosenCell == "NW") {
        NW = player;
    } else if (chosenCell == "W") {
        W = player;
    } else if (chosenCell == "SW") {
        SW = player;
    } else if (chosenCell == "N") {
        N = player;
    } else if (chosenCell == "C") {
        C = player;
    } else if (chosenCell == "S") {
        S = player;
    } else if (chosenCell == "NE") {
        NE = player;
    } else if (chosenCell == "E") {
        E = player;
    } else if (chosenCell == "SE") {
        SE = player;
    } else {
        cout << "THIS SHOULD NEVER BE REACHED" << endl;
    }
}

/**
 * Checks if player has a winning configuration by exhaustively checking all winning configurations
 * @param player
 * @return True if player has winning configuration; False otherwise
 */
bool checkForWinner(char player) {
    return NW == player && N == player && NE == player ||
    W == player && C == player && E == player ||
    SW == player && S == player && SE == player ||
    NW == player && W == player && SW == player ||
    N == player && C == player && S == player ||
    NE == player && E == player && SE == player ||
    NW == player && C == player && SE == player ||
    SW == player && C == player && NE == player;
}

/**
 * Prompts user for a cell from NW, W, SW, N, C, S, NE, E, SE. If invalid or non-empty cell is chosen
 * function is recursively called until valid, empty cell is chosen
 * @return a valid, empty cell
 */
string solicitCell() {
    string chosenCell;
    cout << "Choose a cell (NW, W, SW, N, C, S, NE, E, SE): ";
    cin >> chosenCell;

    if (chosenCell == "NW" && NW == EMPTY) {
        return "NW";
    } else if (chosenCell == "W" && W == EMPTY) {
        return "W";
    } else if (chosenCell == "SW"&& SW == EMPTY) {
        return "SW";
    } else if (chosenCell == "N" && N == EMPTY) {
        return "N";
    } else if (chosenCell == "C" && C == EMPTY) {
        return "C";
    } else if (chosenCell == "S" && S == EMPTY) {
        return "S";
    } else if (chosenCell == "NE" && NE == EMPTY) {
        return "NE";
    } else if (chosenCell == "E" && E == EMPTY) {
        return "E";
    } else if (chosenCell == "SE" && SE == EMPTY) {
        return "SE";
    } else {
        cout << chosenCell << " is not a valid choice" << endl;
        return solicitCell();
    }
}

/**
 * Recursive call in which it is currentPlayer's turn to play
 * @param currentPlayer character representing the current player
 * @param movesLeft number of recursive calls (i.e., moves left)
 * @return draw if movesLeft is 0, otherwise, it the winner is returned
 */
char makeMoves(char currentPlayer, int movesLeft) {
    if (movesLeft == 0) {
        return DRAW;
    }

    printBoard();

    cout << currentPlayer << "'s move (" << movesLeft << " moves left)" << endl;
    string chosenCell;

    if (currentPlayer == USER) {
        chosenCell = solicitCell();
    } else {
        chosenCell = chooseRandomCell();
    }
    cout << currentPlayer << " chose " << chosenCell << endl;

    setCell(chosenCell, currentPlayer);

    bool winner = checkForWinner(currentPlayer);

    if (winner) {
        return currentPlayer;
    } else {
        return makeMoves(currentPlayer == USER ? COMP : USER, movesLeft - 1);
    }
}

/**
 * Sets all spaces on the board to empty
 */
void resetBoard() {
    NW = N = NE = W = C = E = SW = S = SE = EMPTY;
}

/**
 * This recursive function executes a TicTacToe game numGamesLeft times
 * @param numGamesLeft the number of times the recursive call is called (i.e., number of games)
 * @return an integer representing the number of times the user wins
 */
int playTicTacToe(int numGamesLeft) {

    cout << numGamesLeft << " game" << (numGamesLeft == 1 ? "" : "s") << " left" << endl;

    if (numGamesLeft == 0) {
        return 0;
    }

    char startPlayer = USER;

    char winner = makeMoves(startPlayer, TOTAL_MOVES);

    int winCount = 0;



    if (winner == USER) {
        cout << "YOU WIN!" << endl;
        winCount++;
    } else if (winner == DRAW) {
        cout << "DRAW" << endl;
    } else {
        cout << "COMPUTER WINS" << endl;
    }

    printBoard();
    cout << "******************" << endl << endl;

    resetBoard();
    winCount += playTicTacToe(numGamesLeft - 1);

    return winCount;
}

int main() {

    // Initialize random seed generator
    srand(time(nullptr));
    int numGames = 2;


    int userWins = playTicTacToe(numGames);

    cout << "User won " << userWins << " out of " << numGames << " times (" << int(100.0 * userWins / numGames) << "%)" << endl;

    return 0;
}

#include <bits/stdc++.h>
#include <stdlib.h>
#include <unistd.h>
#include <windows.h>
#include <cctype>
#include <conio.h>
#include <time.h>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;

class JumbledWords{
    public:
        string word;
        int tries;

        JumbledWords(){
        tries = 0;
        }


        void one(){
            cout<<"\nLets Start ";
            cout<<"\nFirst Word: erwta";
            cout<<"\nEnter: ";
            cin>>word;
            //getline(cin, word);
                if(word == "water"){
                    cout<<"\nCorrect Answer! Well Done "<<endl;
                    tries++;
                }
                else if(word == "hint"){
                    cout<<"You can't live without it "<<endl;
                    one();
                }
                else if(word == "quit"){
                    return;
                }
                else{
                    cout<<"Oops! Try again "<<endl;
                    one();
                }
        }

        void two(){
            cout<<"\nLets Start ";
            cout<<"\nSecond Word: mehtatasmci";
            cout<<"\nEnter: ";
            cin>>word;
            //getline(cin, word);
                if(word == "mathematics"){
                    cout<<"\nCorrect Answer! Well Done "<<endl;
                    tries++;
                }
                else if(word == "hint"){
                    cout<<"You Probably hated it in school !!"<<endl;
                    two();
                }
                else if(word == "quit"){
                    return;
                }
                else{
                    cout<<"\nOops! Try again "<<endl;
                    two();
                }
        }

        void three(){
            cout<<"\nLets Start ";
            cout<<"\nThird Word: gmea";
            cout<<"\nEnter: ";
            cin>>word;
            //getline(cin, word);
                if(word == "game"){
                    cout<<"\nCorrect Answer! Well Done "<<endl;
                    tries++;
                }
                else if(word == "hint"){
                    cout<<"You are playing it now !!"<<endl;
                    three();
                }
                else if(word == "quit"){
                    return;
                }
                else{
                    cout<<"\nOops! Try again "<<endl;
                    three();
                }
        }

        void four(){
            cout<<"\nLets Start ";
            cout<<"\nFourth Word: blecnmaau";
            cout<<"\nEnter: ";
            cin>>word;
            //getline(cin, word);
                if(word == "ambulance"){
                    cout<<"\nCorrect Answer! Well Done "<<endl;
                    tries++;
                }
                else if(word == "hint"){
                    cout<<"Saves you in Emergency"<<endl;
                    four();
                }
                else if(word == "quit"){
                    return;
                }
                else{
                    cout<<"\nOops! Try again "<<endl;
                    four();
                }
        }

        void five(){
            cout<<"\nLets Start ";
            cout<<"\nFifth Word: ceiosty";
            cout<<"\nEnter: ";
            cin>>word;
            //getline(cin, word);
                if(word == "society"){
                    cout<<"\nCorrect Answer! Well Done "<<endl;
                    tries++;
                }
                else if(word == "hint"){
                    cout<<"We live in a :) "<<endl;
                    five();
                }
                else if(word == "quit"){
                    return;
                }
                else{
                    cout<<"\nOops! Try again "<<endl;
                    five();
                }
        }

        void six(){
            cout<<"\nLets Start ";
            cout<<"\nSixth Word: artune";
            cout<<"\nEnter: ";
            cin>>word;
            //getline(cin, word);
                if(word == "nature"){
                    cout<<"\nCorrect Answer! Well Done "<<endl;
                    tries++;
                }
                else if(word == "hint"){
                    cout<<"We must protect it "<<endl;
                    six();
                }
                else if(word == "quit"){
                    return;
                }
                else{
                    cout<<"\nOops! Try again "<<endl;
                    six();
                }
        }

        void seven(){
            cout<<"\nLets Start ";
            cout<<"\nSeventh Word: nicnteton";
            cout<<"\nEnter: ";
            cin>>word;
            //getline(cin, word);
                if(word == "continent"){
                    cout<<"\nCorrect Answer! Well Done "<<endl;
                    tries++;
                }
                else if(word == "hint"){
                    cout<<"There are seven in the world "<<endl;
                    seven();
                }
                else if(word == "quit"){
                    return;
                }
                else{
                    cout<<"\nOops! Try again "<<endl;
                    seven();
                }
        }

        void eight(){
            cout<<"\nLets Start ";
            cout<<"\nEighth Word: ezor";
            cout<<"\nEnter: ";
            cin>>word;
            //getline(cin, word);
                if(word == "zero"){
                    cout<<"\nCorrect Answer! Well Done "<<endl;
                    tries++;
                }
                else if(word == "hint"){
                    cout<<"Indian's invented it "<<endl;
                    eight();
                }
                else if(word == "quit"){
                    return;
                }
                else{
                    cout<<"\nOops! Try again "<<endl;
                    eight();
                }
        }

        void nine(){
            cout<<"\nLets Start ";
            cout<<"\nNinth Word: afblotlo";
            cout<<"\nEnter: ";
            cin>>word;
            //getline(cin, word);
                if(word == "football"){
                    cout<<"\nCorrect Answer! Well Done "<<endl;
                    tries++;
                }
                else if(word == "hint"){
                    cout<<"It's the most popular sport in the world "<<endl;
                    nine();
                }
                else if(word == "quit"){
                    return;
                }
                else{
                    cout<<"\nOops! Try again "<<endl;
                    nine();
                }
        }

        void ten(){
            cout<<"\nLets Start ";
            cout<<"\nNinth Word: stressed";
            cout<<"\nEnter: ";
            cin>>word;
            //getline(cin, word);
                if(word == "dessert"){
                    cout<<"\nCorrect Answer! Well Done "<<endl;
                    tries++;
                    cout<<"\nCongratulations! You have successfully completed the game";
                }
                else if(word == "hint"){
                    cout<<"We love to eat it after food "<<endl;
                    ten();
                }
                else if(word == "quit"){
                    return;
                }
                else{
                    cout<<"\nOops! Try again "<<endl;
                    ten();
                }
        }




        int play(){
            cout<<"Would you like to continue? Enter 'y' for yes & 'n' for no: ";
            char confirmation;
            cin>>confirmation;
            cout<<endl;
            if(confirmation == 'n'){
                return 0;
            }
            else{
            one();
            two();
            three();
            four();
            five();
            six();
            seven();
            eight();
            nine();
            ten();
            }
        }




};

class Sudoku{
    public:
        int n;
    //int **question = new int*[n];
    //int **helper = new int*[n];

    sudoku(){
     n = 9;
    }


    stack<int> answer_key;
 void print(int **question) {
    for (int i=0; i<9; i++) {
        for (int j=0; j<9; j++) {
            cout << question[i][j] << " ";
        }
        cout << endl;
    }
}

 void print_answerKey(int **helper) {

    stack<int> printing_key;
    while (!answer_key.empty()) {
        printing_key.push(answer_key.top());
        answer_key.pop();
    }

    for (int i=0; i<9; i++) {
        for (int j=0; j<9; j++) {
            if (helper[i][j] != 0) {
                cout << "x ";
            }
            else {
                cout << printing_key.top() << " ";
                printing_key.pop();
            }
        }
        cout << endl;
    }
}

 bool isEmpty(int **question, int &row, int &col) {
    for(int i=0; i<9; i++) {
        for(int j=0; j<9; j++) {
            if(question[i][j] == 0) {
                row = i;
                col = j;
                return true;
            }
        }
    }
    return false;
}

 bool check(int **question, int no, int row, int col) {


    for(int i=0; i<9; i++) {
        if(question[row][i] == no)
            return false;
    }


    for(int i=0;i<9;i++) {
        if(question[i][col] == no)
            return false;
    }


    int rowfactor = row-(row%3);
    int colfactor = col-(col%3);
    for(int i=0; i<3; i++) {
        for(int j=0; j<3; j++) {
            if(question[i+rowfactor][j+colfactor] == no)
                return false;
        }
    }
    return true;
}

 bool solve(int **question) {
    int row,col;
    if(!isEmpty(question,row,col)) {
        return true;
    }

    for(int i=1; i<=9; i++) {
        if(check(question, i, row, col)) {
            answer_key.push(i);
            question[row][col] = i;
            if(solve(question)) {
                return true;
            }
            question[row][col] = 0;
        }
    }
    answer_key.pop();
    return false;
}

 void not_found() {
    cout << "Not found";
}

 bool valid_position(int **question, pair<int, int> position) {
    if (question[position.first-1][position.second-1] != 0) {
        return false;
    }
    return true;
}

pair<int, int> take_input(int **question) {
    int row;
    int col;
    cout << "**Enter position**" << endl;
    cout << "Row: ";
    cin >> row;
    cout << "Column: ";
    cin >> col;
    pair<int, int> position;
    position.first = row;
    position.second = col;
    if (!valid_position(question, position)) {
        cout << "Please enter an editable position" << endl;
        position = take_input(question);
    }
    return position;
}

 void set_element(int **question, int **for_user) {
    pair<int, int> position;
    position = take_input(question);

    int element;
    cout << "Enter Element: ";
    cin >> element;

    if(check(for_user, element, position.first-1, position.second-1)) {
        for_user[position.first-1][position.second-1] = element;
        cout << "Please wait, inserting";
        return;
    }
    else {
        cout << "Element can't be inserted as insertion condition is failing";
        return;
    }


}

 void delete_element(int **question, int **for_user) {
    pair<int, int> position;
    position = take_input(question);

    for_user[position.first-1][position.second-1] = 0;

}

 void hint(int **question, int **for_user, int **helper) {
    ;

    pair<int, int> position;
    position = take_input(question);

    int element = helper[position.first-1][position.second-1];
    cout << "Element present is: " << element << endl;
    for_user[position.first-1][position.second-1] = element;

}

 bool check_sudoku_solved(int **helper, int **for_user) {

    for (int i=0; i<9; i++) {
        for (int j=0; j<9; j++) {
            if (for_user[i][j] != helper[i][j]) {
                return false;
            }
        }
    }
    return true;
}

  int play(){
      int n = 9;
    int **question = new int*[n];
    int **helper = new int*[n];

    int b[81] = { 9, 0, 0, 0, 2, 0, 7, 5, 0,
                  6, 0, 0, 0, 5, 0, 0, 4, 0,
                  0, 2, 0, 4, 0, 0, 0, 1, 0,
                  2, 0, 8, 0, 0, 0, 0, 0, 0,
                  0, 7, 0, 5, 0, 9, 0, 6, 0,
                  0, 0, 0, 0, 0, 0, 4, 0, 1,
                  0, 1, 0, 0, 0, 5, 0, 8, 0,
                  0, 9, 0, 0, 7, 0, 0, 0, 4,
                  0, 8, 2, 0, 4, 0, 0, 0, 6};

    for(int i=0, k=0; i<n; i++) {
        question[i] = new int[n];
        helper[i] = new int[n];
        for(int j=0; j<n; j++) {
            question[i][j]= b[k];
            helper[i][j] = b[k];
            k++;
        }
    }


    cout << endl << "----Welcome User----" << endl << endl;
    cout << "This is our question of the day for you!" << endl << endl;
    print(question);
    cout << endl;

    int hint_counter = 2;


    int choice;
    cout << "What would you like to do?" << endl;
    cout << "1. Solve Sudoku" << endl;
    cout << "2. Check Answer" << endl;
    cin >> choice;
    system("cls");
    if (choice == 1) {

        solve(helper);

        int **for_user = new int*[n];
        for(int i=0, k=0; i<n; i++) {
            for_user[i] = new int[n];
            for(int j=0; j<n; j++) {
                for_user[i][j]= b[k];
                k++;
            }

        }


        int enter_input = 0;
        while (enter_input == 0 || enter_input == 1 || enter_input == 2 || enter_input == 3) {
            print(for_user);
            cout << "RULES" << endl;
            cout << "After every insertion, you have 4 choices" << endl;
            cout << "1. Insert" << endl;
            cout << "2. Hint (only " << hint_counter << ")" << endl;
            cout << "3. Delete" << endl;
            cout << "4. Exit" << endl;
            cout << "Note: Exit once the sudoku is solved" << endl;
            cin >> enter_input;

            if (enter_input == 1) {
                set_element(question, for_user);
            }

            else if (enter_input == 2) {
                if (hint_counter > 0) {
                    hint(question, for_user, helper);
                    hint_counter--;
                    cout << "Inserting into sudoku, please wait";
                }
                else {
                    cout << "Sorry, you are out of hints :(" << endl;
                }
            }

            else if (enter_input == 3) {
                delete_element(question, for_user);
                cout << "Please wait, deleting";
            }

            else if (enter_input == 4) {
                cout << "Exiting";
            }
            else {
                cout << "You have entered an invalid input, please try again";
                enter_input = 0;
            }

            sleep(1);
            for (int i=0; i<3; i++) {
                cout << ".";
                sleep(1);
            }
            system("cls");
        }

        cout << "If you think, you have solved the sudoku, press 1: ";
        cin >> enter_input;

        if (enter_input == 1) {

            cout << "Hold onto your breath, we're checking";
            sleep(1);
            for (int i=0; i<3; i++) {
                cout << ".";
                sleep(1);
            }

            bool is_solved = check_sudoku_solved(helper, for_user);
            cout << endl << endl << "Result: ";
            if (is_solved) {
                cout << "Wohoo! Congratulations, you have solved the sudoku successfully." << endl;
            }
            else {
                cout << "Ouch, you missed somewhere. Please check the solution or try again!" << endl;
            }
        }
        else {
            cout << "Thanks for visiting us, see you again!";
        }
    }

    else if (choice == 2) {


        solve(question);
        int choice2;
        cout << "1. Complete Sudoku" << endl;
        cout << "2. Answer Key" << endl;
        cin >> choice2;
        if (choice2 == 1) {
            cout << "The answer to this sudoku is: " << endl;
            print(question);
        }
        else if (choice2 == 2) {
            print_answerKey(helper);
        }
        else {
            cout << "Didn't understand your command :(";
        }
    }

    else {
        cout << "Didn't understand your command :(";
    }
    return 0;
  }

};

class SnakesAndLadders{
    public:
        int roll;
        int computer_roll;

        int input;

        int progress;

        int player = 0;

        int computer = 0;

        int squares[99];

        SnakesAndLadders(){
            player = 0;
            computer = 0;
        }

 int play(){
    srand( time(NULL) );

    string alert = "";
    string computer_alert = "";

    cout << "Welcome to snakes and ladders, enter any number to roll dice, press 0 to quit\n\n";
    cout << "SNAKES\tLADDERS\n99-5\t4-36\n93-25\t8-28\n77-9\t20-41\n52-6\t35-67\n30-2\t45-66\n\n";

    for ( int i = 1; i <= 100; i++)
        {
            squares[i] = i;
        }

    do
    {
        cout << "enter: ";
        cin >> input;

        roll = roll_dice();

        if( (roll + player) > 100)
        {
            player = player;
        }
        else
        {
            squares[player] = player;
            player = player + roll;
        }

        computer_roll = roll_dice();

        if( (computer_roll + computer) > 100)
        {
            computer = computer;
        }
        else
        {
            squares[computer] = computer;
            computer = computer + computer_roll;
        }

        switch(player)
        {
            case 99:
            player = 5;
            alert = "OOPS... You ran into a SNAKE!";
            break;

            case 93:
            player = 25;
            alert = "OOPS... You ran into a SNAKE!";
            break;

            case 77:
            player = 9;
            alert = "OOPS... You ran into a SNAKE!";
            break;

            case 52:
            player = 6;
            alert = "OOPS... You ran into a SNAKE!";
            break;

            case 30:
            player = 2;
            alert = "OOPS... You ran into a SNAKE!";
            break;

            case 45:
            player = 66;
            alert = "YAY! you climbed a ladder!!!";
            break;

            case 35:
            player = 67;
            alert = "YAY! you climbed a ladder!!!";
            break;

            case 20:
            player = 41;
            alert = "YAY! you climbed a ladder!!!";
            break;

            case 8:
            player = 28;
            alert = "YAY! you climbed a ladder!!!";
            break;

            case 4:
            player = 36;
            alert = "YAY! you climbed a ladder!!!";
            break;

            default:
            alert = "";

        }

        switch(computer)
        {
            case 99:
            computer = 5;
            computer_alert = "OOPS... Computer ran into a SNAKE!";
            break;

            case 93:
            computer = 25;
            computer_alert = "OOPS... Computer ran into a SNAKE!";
            break;

            case 77:
            computer = 9;
            computer_alert = "OOPS... Computer ran into a SNAKE!";
            break;

            case 52:
            computer = 6;
            computer_alert = "OOPS... Computer ran into a SNAKE!";
            break;

            case 30:
            computer = 2;
            computer_alert = "OOPS... Computer ran into a SNAKE!";
            break;

            case 45:
            computer = 66;
            computer_alert = "HAHA! computer climbed a ladder!!!";
            break;

            case 35:
            computer = 67;
            computer_alert = "HAHA! computer climbed a ladder!!!";
            break;

            case 20:
            computer = 41;
            computer_alert = "HAHA! computer climbed a ladder!!!";
            break;

            case 8:
            computer = 28;
            computer_alert = "HAHA! computer climbed a ladder!!!";
            break;

            case 4:
            computer = 36;
            computer_alert = "HAHA! computer climbed a ladder!!!";
            break;

            default:
            computer_alert = "";
        }

        squares[player] = 999;
        squares[computer] = 111;

        if ( input != 0)
        {

            cout<<"You rolled "<<roll<<" Computer rolled "<<computer_roll<<endl;
            cout<<"Your Position: "<<player<<" Computer's Position: "<<computer<<endl;
            cout <<alert<<endl;
            cout <<computer_alert<<endl;

            board();
            cout << "SNAKES\tLADDERS\n99-5\t4-36\n93-25\t8-28\n77-9\t20-41\n52-6\t35-67\n30-2\t45-66\n\n";
        }

        progress = check_progress();

    }
    while ( progress == 0 && input != 0 );

    if ( squares[100] == 999)
    {
        cout << "||You Win!||"<<endl;
    }
    else if ( squares[100] == 111)
    {
        cout << "||Game Over Computer Wins!"<<endl;
    }
    else
    {
        cout << "You Quit!";
    }

    //cin.get();
    //cin.ignore();
}

void board()
{
    cout << "----------------------------------------------------------------------------"<<endl<<endl;
         cout << squares[100]<<"\t"<<squares[99]<<"\t"<<squares[98]<<"\t"<<squares[97]<<"\t"<<squares[96]<<"\t"
         <<squares[95]<<"\t"<<squares[94]<<"\t"<<squares[93]<<"\t"<<squares[92]<<"\t"<<squares[91]<<endl<<endl;

         cout << squares[81]<<"\t"<<squares[82]<<"\t"<<squares[83]<<"\t"<<squares[84]<<"\t"<<squares[85]<<"\t"
         <<squares[86]<<"\t"<<squares[87]<<"\t"<<squares[88]<<"\t"<<squares[89]<<"\t"<<squares[90]<<endl<<endl;

         cout << squares[80]<<"\t"<<squares[79]<<"\t"<<squares[78]<<"\t"<<squares[77]<<"\t"<<squares[76]<<"\t"
         <<squares[75]<<"\t"<<squares[74]<<"\t"<<squares[73]<<"\t"<<squares[72]<<"\t"<<squares[71]<<endl<<endl;

         cout << squares[61]<<"\t"<<squares[62]<<"\t"<<squares[63]<<"\t"<<squares[64]<<"\t"<<squares[65]<<"\t"
         <<squares[66]<<"\t"<<squares[67]<<"\t"<<squares[68]<<"\t"<<squares[69]<<"\t"<<squares[70]<<endl<<endl;

         cout << squares[60]<<"\t"<<squares[59]<<"\t"<<squares[58]<<"\t"<<squares[57]<<"\t"<<squares[56]<<"\t"
         <<squares[55]<<"\t"<<squares[54]<<"\t"<<squares[53]<<"\t"<<squares[52]<<"\t"<<squares[51]<<endl<<endl;

         cout << squares[41]<<"\t"<<squares[42]<<"\t"<<squares[43]<<"\t"<<squares[44]<<"\t"<<squares[45]<<"\t"
         <<squares[46]<<"\t"<<squares[47]<<"\t"<<squares[48]<<"\t"<<squares[49]<<"\t"<<squares[50]<<endl<<endl;

         cout << squares[40]<<"\t"<<squares[39]<<"\t"<<squares[38]<<"\t"<<squares[37]<<"\t"<<squares[36]<<"\t"
         <<squares[35]<<"\t"<<squares[34]<<"\t"<<squares[33]<<"\t"<<squares[32]<<"\t"<<squares[31]<<endl<<endl;

         cout << squares[21]<<"\t"<<squares[22]<<"\t"<<squares[23]<<"\t"<<squares[24]<<"\t"<<squares[25]<<"\t"
         <<squares[26]<<"\t"<<squares[27]<<"\t"<<squares[28]<<"\t"<<squares[29]<<"\t"<<squares[30]<<endl<<endl;

         cout << squares[20]<<"\t"<<squares[19]<<"\t"<<squares[18]<<"\t"<<squares[17]<<"\t"<<squares[16]<<"\t"
         <<squares[15]<<"\t"<<squares[14]<<"\t"<<squares[13]<<"\t"<<squares[12]<<"\t"<<squares[11]<<endl<<endl;

         cout << squares[1]<<"\t"<<squares[2]<<"\t"<<squares[3]<<"\t"<<squares[4]<<"\t"<<squares[5]<<"\t"
         <<squares[6]<<"\t"<<squares[7]<<"\t"<<squares[8]<<"\t"<<squares[9]<<"\t"<<squares[10]<<endl<<endl;
    cout << "----------------------------------------------------------------------------"<<endl;
}

int roll_dice()
{
    return (rand() % 6 )+ 1;
}

int check_progress()
{
    if ( squares[100] == 999 || squares[100] == 111)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}




};

class TicTacToe{
public:
    char board[3][3] = {{'1','2','3'},{'4','5','6'},{'7','8','9'}};

    int choice;
    int row,column;
    char turn;
    bool draw ;

    TicTacToe(){
        draw = false;
        turn = 'X';
    }

    void display_board(){


    cout<<"PLAYER - 1 is [X] & PLAYER - 2 is [O]"<<endl;
        cout<<"     |   |  \n";
        cout<<"   "<<board[0][0]<<" | "<<board[0][1]<<" | "<<board[0][2]<<"\n";
        cout<<" ____|___|____\n";
        cout<<"     |   |  \n";
        cout<<"   "<<board[1][0]<<" | "<<board[1][1]<<" | "<<board[1][2]<<"\n";
        cout<<" ____|___|____\n";
        cout<<"     |   |  \n";
        cout<<"   "<<board[2][0]<<" | "<<board[2][1]<<" | "<<board[2][2]<<"\n";
        cout<<"     |   |  \n";
}

 void player_turn(){
    if(turn == 'X'){
        cout<<"\nPlayer - 1 [X]";
        cout<<"\nEnter the digit: ";
    }
    else if(turn == 'O'){
        cout<<"\nPlayer - 2 [O]";
        cout<<"\nEnter the digit: ";
    }

    cin>> choice;


    switch(choice){
        case 1: row=0; column=0; break;
        case 2: row=0; column=1; break;
        case 3: row=0; column=2; break;
        case 4: row=1; column=0; break;
        case 5: row=1; column=1; break;
        case 6: row=1; column=2; break;
        case 7: row=2; column=0; break;
        case 8: row=2; column=1; break;
        case 9: row=2; column=2; break;
        default:
            cout<<"Invalid Move";
    }

    if(turn == 'X' && board[row][column] != 'X' && board[row][column] != 'O'){

        board[row][column] = 'X';
        turn = 'O';
    }else if(turn == 'O' && board[row][column] != 'X' && board[row][column] != 'O'){

        board[row][column] = 'O';
        turn = 'X';
    }else {

        cout<<"\nBox already filled \n Please choose another!";
        player_turn();
    }


}

bool winner(){

    for(int i=0; i<3; i++)
    if(board[i][0] == board[i][1] && board[i][0] == board[i][2] || board[0][i] == board[1][i] && board[0][i] == board[2][i])
    return false;



    if(board[0][0] == board[1][1] && board[0][0] == board[2][2] || board[0][2] == board[1][1] && board[0][2] == board[2][0])
    return false;


    for(int i=0; i<3; i++)
    for(int j=0; j<3; j++)
    if(board[i][j] != 'X' && board[i][j] != 'O')
    return true;


    draw = true;
    return false;
}

int play(){
    cout<<" T I C  -- T A C -- T O E "<<endl;
    cout<<"FOR 2 PLAYERS"<<endl;
    while(winner()){
        display_board();
        player_turn();
        winner();
    }
    if(turn == 'X' && draw == false){
        cout<<"\nCongratulations!Player with 'X' has won the game"<<endl;
    }
    else if(turn == 'O' && draw == false){
        cout<<"\nCongratulations!Player with 'O' has won the game"<<endl;
    }
    else
    cout<<"\nGAME DRAW!!!"<<endl;
    cout<<endl;
    cout<<endl;
}


};

class Snakes{

    public:
        int star;

        Snakes(){
             star = 0;

        }
        struct Body{
	int x;
	int y;

	Body *next;
}*head, *tail;

int map[40][120];

int sizeX = 90;
int sizeY = 20;
int score = 0;
int xFood = 4;
int yFood = 10;
char v = 177;

void createBody(int x, int y){
	Body * body= new Body;
	body->x = x;
	body->y = y;
	if (!head){
		head = tail = body;
	}
	else{
		tail->next = body;

		tail = body;
	}
	tail->next = NULL;
}

void gotoxy(int x, int y){
	COORD c = {x, y};
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
}

void createMap(){
	for (int i = 0; i < sizeY; i++){
		for (int j = 0; j < sizeX; j++){
			if (i == 0 || i == sizeY - 1 || j == 0 || j == sizeX - 1) map[i][j] = 1;
			else map[i][j] = 0;
		}
	}
	map[yFood][xFood] = 3;
}

void createFood(){
	srand(time(NULL));
	map[yFood][xFood] = 0;
	do{
		xFood = rand() % (sizeX - 2) + 1;
		yFood = rand() % (sizeY - 2) + 1;
	} while (map[yFood][xFood] != 0);
	map[yFood][xFood] = 3;
	gotoxy(xFood, yFood);
	cout<<"*";
}

void viewMap(){
	for (int i = 0; i < sizeY; i++){
		for (int j = 0; j < sizeX; j++){
			if (map[i][j] == 1) cout<<v;
			else if (map[i][j] == 3) cout<<"*";
			else cout<<" ";
		}

		cout<<endl;
	}
}

bool run(int x, int y){
	Body *curr = head;
	int tempX;
	int tempY;
	int helpX;
	int helpY;
	while (curr){
		if (curr == head){
			if(score>2){
				Body *vcurr=head->next->next;
				while(vcurr){
					if(vcurr->x == head->x && vcurr->y == head->y ){
					return false;
					}
					vcurr=vcurr->next;
				}
			}

			map[curr->y][curr->x] = 0;
			if(head->x + x < 1 || head->x + x > sizeX - 2 || head->y + y < 1 || head->y + y > sizeY - 2){
				return false;
			}
			if (head->x == xFood && head->y == yFood){
				int newX = tail->x - x;
				int newY = tail->y - y;
				createBody(newX, newY);
				score++;
				createFood();
			}

			gotoxy(curr->x, curr->y);
			cout<<" ";
			tempX = curr->x;
			tempY = curr->y;
			curr->x = curr->x + x;
			curr->y = curr->y + y;
		}

		else{

			map[curr->y][curr->x] = 0;
			gotoxy(curr->x, curr->y);
			cout<<" ";
			helpX = tempX;
			helpY = tempY;

			tempX = curr->x;
			tempY = curr->y;

			curr->x = helpX;
			curr->y = helpY;
		}

		map[curr->y][curr->x] = 2;
		gotoxy(curr->x, curr->y);

		cout<<v;


		curr = curr->next;
	}
	return true;
}

void play(){
	char move;
	int dir = 4;
	bool walk = true;
	int speed;
	score = 0;
	while(walk){
		if(score>10)speed=150;
		else if(score>20)speed=100;
		else if(score<11) speed=200;
		else speed=50;

		if (kbhit()){
			switch(tolower(move = getch())){
			case 'w':
				if (dir != 3) dir = 1;

				break;
			case 'a':
				if (dir != 4) dir = 2;

				break;
			case 's':
				if (dir != 1) dir = 3;

				break;
			case 'd':
				if (dir != 2) dir = 4;

				break;
			}
		}

		switch(dir){
		case 1:
			walk = run(0, -1);
			break;
		case 2:
			walk = run(-1, 0);
			break;
		case 3:
			walk = run(0, 1);
			break;
		case 4:
			walk = run(1, 0);
			break;
		}

		gotoxy(1, sizeY + 1);
		cout<<"Score : "<< score;

		Sleep(speed);
	}
}


int start(){
	int input=0;

	while(input!=2){
		system("cls");
		puts("1.play");
		puts("2.exit");
		cin>>input;
		if(input==1){
			system("cls");
			createBody(4, 4);
			createMap();
			viewMap();
			play();
			gotoxy(1, sizeY + 2);
			cout<<"game over";
			break;

		}
	}

	return 0;
}


};

class Genie{
    public:
        int star;
        int gen;

        Genie(){
        star = 0;
        gen = 0;
        }

  class Node
{
public:

    string ans;
    struct Node* left;
    struct Node* right;
};
Node *newnode, *root , *start;

/*void question(Node* root, Node* prev);
void Arrange(Node*& root, fstream& file);
void updatetree(Node* fin, Node*& prefin);
void finalquestion(Node* root, Node* prev);

void gameReady();*/

void gameReady()
{
    char ch;
    cout<<"Game Description:\n\tThis is a game based on the concept of Binary Trees.\n\tThe Database of this game will be increased as we play it again and again";
    cout<<"\n\n\nRULES:My name is GENIE and I can guess any animal you can think of.";
    cout<<"\n\t1.Think of an any animal or bird...\n\t2.  The game will guess your animal, reply with \"yes\" or \"no\" only.";
    cout<<"\n\t[NOTE:] You can type \"yes\", \"y\", \"No\", \"n\"\n\n";
    cout<<"Enter any key to continue ";
    cin>>ch;
}
void Update (Node*& root, fstream& file)
{
    if(root == NULL)
        file<<"#"<<endl;
    else
    {
        file<<root->ans<<endl;
        Update(root->left,file);
        Update(root->right,file);
    }
}

void Arrange (Node*& root,fstream& file)
{
            string str;
            if(!file.eof())
            {
                getline(file,str);
                cin.clear();
            }
            else
                return;
            if(str!="#")
            {
                root = new Node;
                root->ans = str;
                Arrange(root->left,file);
                Arrange(root->right,file);
            }
            else
            {
                root = NULL;
            }
}

void preorder(Node *root)
{
    if(root == NULL)
        return;
    else
    {
        cout<<root->ans<<endl;
        preorder(root->left);
        preorder(root->right);
    }
}

void updatetree(Node* fin, Node*& prefin)
{
    string ans,qn;
    cout<<"\n\n\t\t\t\t\t****I ACCEPT MY DEFEAT****"<<endl;
    cout<<"What's your animal?"<<"\t";
    cin.ignore();
    getline(cin,ans);
    cout<<"Now, type a characteristic question for your animal which return your animal "<<ans<<" for yes, and return "<<fin->ans<<" for no"<<endl;
    getline(cin,qn);
    Node *ansnode, *qnnode;
    ansnode = new Node;
    ansnode->ans = ans;
    ansnode->left = NULL;
    ansnode->right = NULL;

    qnnode = new Node;
    qnnode->ans = qn;
    qnnode->left = ansnode;
    qnnode->right = fin;

    if(prefin->left == fin)
    {
        prefin->left = qnnode;
    }

    else if(prefin->right == fin)
    {
        prefin->right = qnnode;
    }
    fstream file;
    file.open("Data.txt",ios::out);
    Update(start,file);
    cout<<"Updated successfully"<<endl<<endl<<endl;
    string reply;
    cout<<"Do you want to play again?";
    cin>>reply;
        if(reply=="yes" || reply=="YES" || reply=="Yes" || reply=="y" || reply=="Y")
        {
            cout<<"Rebooting the system";
            system("CLS");
            question(start,NULL);
        }
        else if(reply=="no" || reply=="NO" || reply=="No" || reply=="n" || reply=="N")
        {
            cout<<"Thanks for playing with me,we had fun. See you soon."<<endl;
        }
    system("pause");
}

void finalquestion(Node* root, Node* prev)
{
    string reply;
    cout<<"Is your animal '"<<root->ans<<"' ?"<<"\t";
    cin>>reply;
    if(reply=="yes" || reply=="YES" || reply=="Yes" || reply=="y" || reply=="Y")
    {
        cout<<"\n\n\t\t\t\tYAAAAAAAAAAAAAAAAAAAH!!! I found out, Huraaaaay"<<endl;
        cout<<"\t\t\t\t\t      Thanks for playing"<<endl<<"\n\nDo you want to play again?";
        cin>>reply;
        if(reply=="yes" || reply=="YES" || reply=="Yes" || reply=="y" || reply=="Y")
        {
            cout<<"Rebooting the system";
            system("CLS");
            question(start,prev);
        }
        else if(reply=="no" || reply=="NO" || reply=="No" || reply=="n" || reply=="N")
        {
            cout<<"Thanks for playing with me, we had fun. See you soon."<<endl;

        }
    }
    else if(reply=="no" || reply=="NO" || reply=="No" || reply=="n" || reply=="N")
        updatetree(root, prev);
    else
    {
        cout<<"Sorry, please enter a valid answer Yes or No"<<endl;
        finalquestion(root,prev);
    }
}

void question(Node* root, Node* prev)
{
    string reply;
    if(root->left!=NULL && root->right!=NULL)
    {
        cout<<root->ans<<endl;
        cin>>reply;
        if(reply=="yes" || reply=="YES" || reply=="Yes" || reply=="y" || reply=="Y")
            question(root->left,root);
        else if(reply=="no" || reply=="NO" || reply=="No" || reply=="n" || reply=="N")
            question(root->right,root);
        else
        {
            cout<<"Sorry, please enter a valid answer Yes or No"<<endl;
            question(root,prev);
        }
    }
    else
    {
        finalquestion(root,prev);
    }
}

int play()
{
    fstream file;

    file.open("Data.txt",ios::in);
    Arrange(start,file);
    file.close();
    gameReady();
    system("CLS");
    question(start,NULL);
    file.open("Data.txt",ios::out);
    Update(start,file);
    file.close();

    return 0;
}




};

int main() {

    JumbledWords obj1;
    SnakesAndLadders obj2;
    Sudoku obj3;
    TicTacToe obj4;
    Snakes obj5;
    Genie obj6;

  int option;
  do {
    cout << "\t\t\t\t\t******** Welcome to the All in One Game Console ********* " << endl;
    cout << "Which Game would you like to play ?" << endl;
    cout << "Enter 1 for Jumbled up Word " << endl;
    cout << "Enter 2 for Snakes & Ladders " << endl;
    cout << "Enter 3 for Sudoku " << endl;
    cout << "Enter 4 for Tic Tac Toe " << endl;
    cout << "Enter 5 for Snakes " << endl;
    cout << "Enter 6 for Genie " << endl;
    cout << "Enter 7 to Clear Screen " << endl;
    cout << "Enter 0 to Exit." << endl;
    cout << "Enter your choice: ";
    cin >> option;

    switch (option) {
    case 0:
      break;

    case 1:
      // Jumbled up Word

      obj1.play();
      break;

    case 2:
      // Snakes & Ladders
      obj2.play();
      break;

    case 3:
      // Sudoku
      obj3.play();
      break;

    case 4:
      // Tic Tac Toe
      obj4.play();
      break;

    case 5:
      // Snakes
      obj5.start();
      break;

    case 6:
      // Genie
      obj6.play();
      break;

    case 7:
       system("CLS");

    default:
      cout << "\nEnter Valid Option Number " << endl;
    }

  } while (option != 0);

  return 0;
}

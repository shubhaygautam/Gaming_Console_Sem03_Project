#include <bits/stdc++.h>
#include <stdlib.h>
//#include <windows.h>
using namespace std;

class JumbledWords{
    public:
        string word;
        int tries = 0;

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




        void play(){
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




};




int main() {

    JumbledWords obj1;

  int option;
  do {
    cout << "Welcome to the All in One Game Console " << endl;
    cout << "Which Game would you like to play ?" << endl;
    cout << "Enter 1 for Snakes & Ladders " << endl;
    cout << "Enter 2 for Jumbled up Word " << endl;
    cout << "Enter 3 for Sudoku " << endl;
    cout << "Enter 4 for Tic Tac Toe " << endl;
    cout << "Enter 5 for Maze Puzzle " << endl;
    cout << "Enter 6 for .... " << endl;
    cout << "Enter 7 to Clear Screen " << endl;
    cout << "Enter 0 to Exit." << endl;
    cout << "Enter your choice: ";
    cin >> option;

    switch (option) {
    case 0:
      break;

    case 1:
      // Jumbled up Word
      cout<<"Great Choice!";
      cout<<"\nFew Things to know before starting ";
      cout<<"\nEnter the words in lower case ";
      cout<<"\nEnter 'hint' to get a small hint about the word ";
      cout<<"\nEnter quit to skip the particular word ";
      obj1.play();
      break;

    case 2:
      // Snakes & Ladders
      break;

    case 3:
      // Sudoku
      break;

    case 4:
      // Tic Tac Toe
      break;

    case 5:
      // Maze Puzzle
      break;

    case 6:
      // Bollywood
      break;

    case 7:
       system("CLS");

    default:
      cout << "/nEnter Valid Option Number " << endl;
    }

  } while (option != 0);

  return 0;
}

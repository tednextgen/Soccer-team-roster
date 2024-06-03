#include <iostream>
#include <iomanip>
using namespace std;
#include <vector>

int main() {
   char ask = 'f';
   int numbers;
   int delete1;
   int newNum;
   
   vector<int> players(5);
   vector<int> rating(5);
   for(unsigned int i = 0; i < 5; i++){
      cout << "Enter player " << i+1 << "'s jersey number:" << endl;
      cin >> players.at(i);
      cout << "Enter player " << i+1 << "'s rating:" << endl << endl;
      cin >> rating.at(i);
   }
   cout << "ROSTER" << endl;
   for(unsigned int j = 0; j < players.size(); j++){
      cout << "Player " << j+1 << " -- Jersey number: " << players.at(j) << ", Rating: " << rating.at(j) << endl;
   }
   cout << endl;
   cout << "MENU" << endl;
   cout << "a - Add player" << endl;
   cout << "d - Remove player" << endl;
   cout << "u - Update player rating" << endl;
   cout << "r - Output players above a rating" << endl;
   cout << "o - Output roster" << endl;
   cout << "q - Quit" << endl << endl;
   cout << "Choose an option:" << endl;
   cin >> ask;
   while(ask != 'q'){
      switch(ask){
         case 'a':
         cout << "Enter a new player's jersey number:" << endl;
         cin >> numbers;
         players.push_back(numbers);
         cout << "Enter the player's rating:" << endl;
         cin >> numbers;
         rating.push_back(numbers);
         cout << endl;
         break;
         
         case 'd':
         cout << "Enter a jersey number: " << endl;
         cin >> delete1;
         
         for(unsigned int k = 0; k < players.size(); k++){
            if(players.at(k) == delete1){
               delete1 = k;
            }
         }
            for(unsigned int q = 0; q < players.size()-1; q++){
               if(q >= delete1){
                  players.at(q) = players.at(q+1);
                  rating.at(q) = rating.at(q+1);
            }
         }
         players.pop_back();
         rating.pop_back();
         break;
         
         case 'u':
         cout << "Enter a jersey number:" << endl;
         cin >> numbers;
         cout << "Enter a new rating for player:" << endl;
         cin >> newNum;
         for(unsigned int l = 0; l < players.size(); l++){
            if(players.at(l) == numbers){
               players.at(l) = numbers;
               rating.at(l) = newNum;
            }
         }
         break;
         
         case 'o':
         cout << "ROSTER" << endl;
         for(unsigned int o = 0; o < players.size(); o++){
            cout << "Player " << o+1 << " -- Jersey number: " << players.at(o) << ", Rating: " << rating.at(o) << endl;
         }
         cout << endl;
         break;
         
         case 'r':
         cout << "Enter a rating:" << endl;
         cin >> numbers;
         cout << endl;
         cout << "ABOVE " << numbers << endl;
         for(unsigned int p = 0; p < rating.size(); p++){
            if(rating.at(p) > numbers){
               cout << "Player " << p+1 << " -- Jersey number: " << players.at(p) << ", Rating: " << rating.at(p) << endl;
            }
         }
         cout << endl;
         break;
      }
      cout << "MENU" << endl;
      cout << "a - Add player" << endl;
      cout << "d - Remove player" << endl;
      cout << "u - Update player rating" << endl;
      cout << "r - Output players above a rating" << endl;
      cout << "o - Output roster" << endl;
      cout << "q - Quit" << endl << endl;
      cout << "Choose an option:" << endl;
      cin >> ask;
   }
   return 0;
}

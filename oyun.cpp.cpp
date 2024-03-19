#include<iostream>
#include<string>

using namespace std;

string player1, player2, word, secretword;

char guess;

int wrong = 0;

int main() {

	cout << "----------WELCOME THE WORD PUZZLES GAME----------" << endl;

	cout << "Enter the first player name:" << endl;

	cin >> player1;

	cout << "Enter the second player name:" << endl;
	cin >> player2;

	cout << player1 << "please   " << player2 << "enter the secret word for second player:  " << endl;
	cin >> word;

	while (secretword.size() != word.size()) {
		secretword.push_back('?');
	}

	for (int i = 0; i < 30; i++) {
		cout << endl;
	}

	do {
		cout << "Exsist the word:";
		cout << secretword;

		cout << "enter the guess:" << endl;
		cin >> guess;

		int x = word.length();

		for (int i = 0; i < x; i++) {
			if (guess == word[i]) {
				secretword[i] = guess;
				wrong--;
			}
		}
		wrong++;
// ------------------------------------------------------------------------
		// by Kamil Umut Araz
		// instagram : k.umutarazz
		// github : arazumut
// ------------------------------------------------------------------------

		if (secretword == word) {
			cout << "you won the game brooo ahahahaha!!!" << endl;
			break;

		}
		if (wrong == 1) {
			cout << "I" << endl;
			cout << endl;
		}
		else if (wrong == 2) {
			cout << "I" << endl;
			cout << "I" << endl;
			cout << endl;
		}
		else if (wrong == 3) {
			cout << "I" << endl;
			cout << "I" << endl;
			cout << "I" << endl;
			cout << endl;
		}
		else if (wrong == 4) {
			cout << "I" << endl;
			cout << "I" << endl;
			cout << "I" << endl;
			cout << "I" << endl;
			cout << endl;
		}
		else if (wrong == 5) {
			cout << "I" << endl;
			cout << "I" << endl;
			cout << "I" << endl;
			cout << "I" << endl;
			cout << "I" << endl;
			cout << endl;
		}
		else if (wrong == 6) {
			cout << "I*******" << endl;
			cout << "I" << endl;
			cout << "I" << endl;
			cout << "I" << endl;
			cout << "I" << endl;
			cout << endl;
		}
		else if (wrong == 7) {
			cout << "I*******" << endl;
			cout << "I    O" << endl;
			cout << "I" << endl;
			cout << "I" << endl;
			cout << "I" << endl;
			cout << endl;
		}
		else if (wrong == 8) {
			cout << "I*******" << endl;
			cout << "I    O" << endl;
			cout << "I    !" << endl;
			cout << "I" << endl;
			cout << "I" << endl;
			cout << endl;
		}
		else if (wrong == 9) {
			cout << "I*******" << endl;
			cout << "I    O" << endl;
			cout << "I   -!" << endl;
			cout << "I" << endl;
			cout << "I" << endl;
			cout << endl;
		}
		else if (wrong == 10) {
			cout << "I*******" << endl;
			cout << "I    O" << endl;
			cout << "I   -!-" << endl;
			cout << "I" << endl;
			cout << "I" << endl;
			cout << endl;
		}
		else if (wrong == 11) {
			cout << "I*******" << endl;
			cout << "I    O" << endl;
			cout << "I   -!-" << endl;
			cout << "I   /" << endl;
			cout << "I" << endl;
			cout << endl;
		}
		else if (wrong == 12) {
			cout << "I*******" << endl;
			cout << "I    O" << endl;
			cout << "I   -!-" << endl;
			cout << "I   / /" << endl;
			cout << "I" << endl;
			cout << endl;

			cout << "YOU LOST DUDE HAHAHAHA!!!" << endl;

			cout << " word is:" << word << endl;
		}
	} while (wrong < 12);



}
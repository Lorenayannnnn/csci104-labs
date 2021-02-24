#include "keyboard.h"
#include <map>

using namespace std;

int calculateTime(string keyboard, string word) {
	int sum = 0;
	map<char, int> board; // Map from the character to its position index on the keyboard
	for (unsigned int i = 0; i < keyboard.length(); i++) {
		board[keyboard[i]] = i;
	}
	int prev = 0;
	for (unsigned int i = 0; i < word.length(); i++) {
		sum += abs(board[word[i]] - prev);
		prev = board[word[i]];
	}
	return sum;
}
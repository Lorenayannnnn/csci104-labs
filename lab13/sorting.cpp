#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void print(const vector<pair<string,int>>& values) {
    // TO DO: print string and int in this format: "A1 B2 C3"
    for (const auto& eachPair : values) {
        cout << eachPair.first << eachPair.second << " ";
    }
    cout << endl;
}

/* The program will be run like so:

./sorting -- sort alphabetically (by the string in the pair)
./sorting 0 -- sort alphabetically
./sorting 1 -- sort numerically (by the int in the pair)

*/

int main(int argc, char** argv) {
    /**
     * -1: sort alphabetically by the string in the pair
     * 0: sort alphabetically
     * 1: sort numerically by the int in the pair
     */
	int number;
	if (argc < 2) {
		number = 0;
	} else {
		number = argv[1][0] - '0';
	}

    auto lambdaSort = [number](pair<string,int> const& s1, pair<string,int> const& s2) -> bool
    {
        if (number == 0) {
            return s1.first <= s2.first;
        } else {
            return s1.second <= s2.second;
        }
    };

    vector<pair<string,int>> values = {make_pair(string("F"), 15), make_pair(string("E"), 4),
                                       make_pair(string("D"), 8), make_pair(string("C"), 16), make_pair(string("B"), 23), make_pair(string("A"), 42)};


    cout << "BEFORE:" << endl;
    print(values);

    // TO DO: use sort and your lambda function to sort the vector
    // http://www.cplusplus.com/reference/algorithm/sort/
    sort(values.begin(), values.end(), lambdaSort);

    cout << "AFTER:" << endl;
    print(values);
}
#include <iostream>
#include <string>

using namespace std;

int main() {

    string phrase {};
    cout << "Please enter a string: ";
    getline(cin, phrase);

    size_t num_letters = phrase.length();
    int position {0};

    for (char c: phrase)
    {
        size_t num_spaces = num_letters - position;
        //adds the whitespace...
        while (num_spaces > 0)
        {
            cout << " ";
            --num_spaces;
        }
        //display letters in order...
        for (size_t j = 0; j < position; ++j)
        {
            cout << phrase.at(j);
        }
        //display center letter...
        cout << c;
        //display letter in reverse order...
        for (int j = position - 1; j >= 0; --j)
        {
            auto k = static_cast<size_t>(j);
            cout << phrase.at(k);
        }
        cout << endl;
        ++position;
    }


    return 0;
}

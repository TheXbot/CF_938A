#include <iostream>
#include <string>

using namespace std;

bool isVowel(char ch) {
    if ((ch == 'a') ||
        (ch == 'e') ||
        (ch == 'i') ||
        (ch == 'o') ||
        (ch == 'u') ||
        (ch == 'y')) return true;
        else return false;
}

int main()
{
    int n;
    string word;
    cin >> n >> word;
    for (int i = 0; i < word.length() - 1; i++) {
        if (isVowel(word[i]) && isVowel(word[i + 1])) {
            word.erase(word.begin() + i + 1);
            i--;
        }
    }
    cout << word;
    return 0;
}

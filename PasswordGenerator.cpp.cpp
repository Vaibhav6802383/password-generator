#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>

using namespace std;

string getPassword(int length) {
    string password = "";
    string characters = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
    int charSize = characters.size();

    srand(static_cast<unsigned int>(time(0)));  // Seed the random number generator

    for (int i = 0; i < length; i++) {
        int randomIndex = rand() % charSize;
        password += characters[randomIndex];
    }

    return password;
}

int main() {
    int length;
    cout << "Enter the length of the Password: ";
    cin >> length;

    if (length <= 0) {
        cout << "Password length must be greater than 0." << endl;
        return 1;
    }

    string password = getPassword(length);
    cout << "Generated Password: " << password << endl;

    return 0;
}

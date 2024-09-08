#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

string generatePassword(int length) {
    const string characters = 
        "0123456789"
        "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
        "abcdefghijklmnopqrstuvwxyz"
        "!@#$%^&*()_+-=[]{}|;:,.<>?";

    string password;
    int charactersLength = characters.size();
    
    srand(static_cast<unsigned int>(time(0))); 

    for (int i = 0; i < length; ++i) {
        password += characters[rand() % charactersLength];
    }

    return password;
}

int main() {
    int length;
    cout << "Enter the length of the password: ";
    cin >> length;

    string password = generatePassword(length);
    cout << "Generated password: " << password << endl;

    return 0;
}

#include <iostream>
#include <string>
using namespace std;

int main() {
    string input;
    
    while (true) {
        cout << "$ ";
        getline(cin, input);
        
        if (input == "exit") break;
        
        cout << "Command: " << input << endl;
    }
    
    return 0;
}
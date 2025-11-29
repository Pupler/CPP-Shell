#include <iostream>
#include <string>
using namespace std;

int main() {
    string input;
    
    while (true) {
        cout << "$ ";
        
        if (!getline(cin, input)) {
            break;
        }
        
        if (input.empty()) continue;
        if (input == "exit") break;
        
        cout << "Command: " << input << endl;
    }
    
    return 0;
}
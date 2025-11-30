#include <iostream>
#include <string>
#include <sstream>
#include <vector>
using std::cout, std::endl, std::string, std::cin, std::vector, std::stringstream;

vector<string> parse_command(const string& input) {
    vector<string> args;
    stringstream ss(input);
    string arg;
    
    while (ss >> arg) {
        args.push_back(arg);
    }
    
    return args;
}

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
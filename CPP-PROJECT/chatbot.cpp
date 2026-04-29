#include <iostream>
#include <string>
#include <cstdio>
#include <memory>
#include <stdexcept>
#include <array>
#include <fstream>

using namespace std;

// Function to extract only the 'response' value from the JSON string
string parseResponse(string rawJson) {
    string target = "\"response\":\"";
    size_t startPos = rawJson.find(target);
    
    if (startPos == string::npos) return "Error: Could not parse response.";
    
    startPos += target.length();
    size_t endPos = rawJson.find("\"", startPos);
    
    if (endPos == string::npos) return "Error: JSON formatting issue.";
    
    return rawJson.substr(startPos, endPos - startPos);
}

string exec(const char* cmd) {
    array<char, 128> buffer;
    string result;
    FILE* pipe = _popen(cmd, "r");
    if (!pipe) throw runtime_error("popen() failed!");
    while (fgets(buffer.data(), buffer.size(), pipe) != nullptr) {
        result += buffer.data();
    }
    _pclose(pipe);
    return result;
}

void logInteraction(const string& user, const string& ai) {
    ofstream logFile("chat_history.txt", ios::app);
    if (logFile.is_open()) {
        logFile << "USER: " << user << "\nAI: " << ai << "\n\n";
        logFile.close();
    }
}

int main() {
    string userInput;
    
    cout << "========================================" << endl;
    cout << "             CODE BUDDY                 " << endl;
    cout << "      (Type 'exit' to close program)    " << endl;
    cout << "========================================" << endl;

    while (true) {
        cout << "\n> You: ";
        getline(cin, userInput);

        if (userInput == "exit" || userInput == "quit") break;

        // Constructing command with stream:false
        string command = "curl -s http://localhost:11434/api/generate "
                         "-H \"Content-Type: application/json\" "
                         "-d \"{\\\"model\\\":\\\"qwen2.5:3b\\\",\\\"prompt\\\":\\\"" + userInput + "\\\",\\\"stream\\\":false}\"";

        cout << "... AI is responding..." << endl;

        try {
            string rawResponse = exec(command.c_str());
            string cleanResponse = parseResponse(rawResponse);
            
            cout << "\nAI: " << cleanResponse << endl;
            cout << "----------------------------------------" << endl;

            logInteraction(userInput, cleanResponse);

        } catch (const exception& e) {
            cerr << "!! SYSTEM ERROR: " << e.what() << endl;
        }
    }

    cout << "\nSession ended. Press Enter to exit...";
    cin.get(); 
    return 0;
}
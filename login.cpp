#include <iostream>
#include <fstream>
#include <string>
void login();
int main();

using namespace std;

void createAccount() {
    string username, password;
    cout << "Enter a username: ";
    cin >> username;
    cout << "Enter a password: ";
    cin >> password;

    ofstream file("user_data.txt", ios::app);
    if (file.is_open()) {
        file << username << "," << password << "\n";
        file.close();
        cout << "Account created successfully!" << endl;

        cout<<endl;
        cout<<"Do you want to log in  : "<<endl<<" if yes Enter 2 "<<endl;
        int yes;
        cin>>yes;

        if(yes == 2 ){
            login();
        }else if(yes != 2 ){
            main();
        }
        else{
            main();
        }

    } else {
        cout << "Unable to open file." << endl;
    }
}

void login() {
    string username, password;
    cout << "Enter your username:  "<<endl<< "(Do not leave any space)"<<endl;
    cin >> username;
    cout << "Enter your password: ";
    cin >> password;

    ifstream file("user_data.txt");
    if (file.is_open()) {
        string line;
        while (getline(file, line)) {
            size_t pos = line.find(",");
            string storedUsername = line.substr(0, pos);
            string storedPassword = line.substr(pos + 1);
            if (username == storedUsername && password == storedPassword) {
                cout << "Login successful!" << endl;
                file.close();
                return;
            }
        }
        cout << "Invalid username or password." << endl;
        file.close();
    } else {
        cout << "Unable to open file." << endl;
    }
}

int main() {
   
        cout << "1. Create an account" << endl;
        cout << "2. Login" << endl;
        cout << "3. Exit" << endl;
        cout << "Enter your choice: ";

        int choice;
        cin >> choice;

        switch (choice) {
            case 1:
                createAccount();
                break;
            case 2:
                login();
                break;
            case 3:
                return 0;
            default:
                cout << "Invalid choice. Try again." << endl;
        }
    
}
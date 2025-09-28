#include <iostream>
using namespace std;

int main () {
    string email;
    string username;
    string password;
    string repass;
    string inputPassword;
    string inputEmail;
    
    cout << "Welcome to Genshin Impact, Traveller!\n";
    cout << "\n";
    cout << "Don't have an account? Sign up!\n";
    cout << "\n";
    cout << "What should we call you?\n";
    cout << "Enter username: ";
    cin >> username;
    cout << "Enter your email: ";
    cin >> email;
    cout << "Enter your Password: ";
    cin >> password;
    cout << "Retype password: ";
    cin >> repass;
            if (repass==password){
    cout << "\n";
                cout << "You have successfuly signed up!\n";
                cout << "Please enter log in to play the game\n";
                cout << "\n";
                cout << "\n";
                cout << "LOG IN\n";
    cout << "Enter Email: ";
    cin >> inputEmail;
    cout << "Password: ";
    cin >> inputPassword;
                    if (password == inputPassword && email == inputEmail) {
                    cout << "You have successfuly log in," << username << "!" << endl;
                    
                    } else {
                    cout << "INVALID EMAIL/PASSWORD!\n";
                    cout << "If you are not e registered user, sign up first!";
    }
                    
                    
            } else if ((password!=inputPassword)&&(email!=inputEmail)){
                cout << "Incorrect password! Please check your password.\n";
            }
    
    return 0;
}
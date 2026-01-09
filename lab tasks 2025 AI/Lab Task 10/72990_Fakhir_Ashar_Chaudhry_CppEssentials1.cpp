#include <iostream>
#include <fstream>  
#include <string>

using namespace std;

int main() {
    string storedPassword, userPassword;
    
     
    cout<<"Name: Fakhir Ashar Chaudhry \nSap: 72990\n";
    ifstream passwordFile("pwd.txt");   
    
    
    if (!passwordFile.is_open()) {
        cout<<"Error Could not open pwd.txt file!"<<endl;
    
        return 1;   
    }
    
     
    getline(passwordFile, storedPassword);
    passwordFile.close();   
    
    
     
    cout <<"Enter your password: "<<endl;
    getline(cin, userPassword);
    
     
    if (userPassword == storedPassword) {
        cout <<"Password Matched Successfully"<<endl;
    } else {
        cout<<"Invalid Password"<<endl;
    }
    
    return 0;
}
#include <iostream>
#include <string>

using namespace std;

int main(int argc, char const *argv[])
{

    string name;
    cout << "What is your full name? " << endl;
    // cin >> name;
    getline(cin , name);
    cout << name << endl;
    return 0;
}

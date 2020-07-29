#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char const *argv[])
{
    cout << "\n\nThe text without any formating\n";
    cout<<"Ints"<<"Floats"<<"Doubles"<< "\n";
    cout<<"\nThe text with setw(15)\n";
    cout<<"Ints"<<setw(15)<<"Floats"<<setw(15)<<"Doubles"<< "\n";
    cout<<"\n\nThe text with tabs\n";
    cout<<"Ints\t"<<"Floats\t"<<"Doubles"<< "\n";
    return 0;
}

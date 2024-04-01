// Chap1.cpp: defines the entry point for the console application


#include <iostream>
#include <string>

using namespace std;


int main(int argc, char* argv[])
{
    cout << "What is your name?" <<endl;

    string name {};
    cin >> name;

    cout << "You said your name " << name << endl;

    return 0;
}
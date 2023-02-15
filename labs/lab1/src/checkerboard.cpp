#include <iostream>
using namespace std;

int readIntInput(){
    int input;
    if(!(cin >> input)){
        throw std::invalid_argument("Error: readIntInput must be an int");
    }
    return input;
}

int main(int argc, char **argv)
{
    if(argc != 6){
        throw std::invalid_argument("Error: unexpected arguments");
    }
    int i = readIntInput();
    cout << i;
    return 0;
}


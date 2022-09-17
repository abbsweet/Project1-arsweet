#include <iostream>
#include <fstream>
#include <vector>
#include "cambridge.h"
using namespace std;

int main() {
    //identify the vector cambridge
    vector<cambridge> cambridge;
    //put the data set into the function in the header file
    getDataFromFile("../Dogs_of_Cambridge-2.csv", cambridge);
    //print statements
    cout << "This is the size of the data set:" << endl;
    cout << cambridge.size() << endl;

    //calculation
    cout << "This is the number of dogs with the name Luna:" << endl;
    cout << calc(cambridge) << endl;

    return 0;
}
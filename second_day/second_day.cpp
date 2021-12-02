#include <iostream>
#include <fstream>
#include <cstring>
#include "second_day.hpp"

using namespace std;

void solve_second_day(std::ifstream & stream) {

    string line;

    int position = 0, depth = 0;

    while (getline(stream, line)) {
        int pos = line.find(' ');
        int size = line.size();

        string action = line.substr(0, pos);
        int num = atoi(line.substr(pos+1, size-1).c_str());

        if (action == "forward") {
            position += num;
        }

        if (action == "down") {
            depth += num;
        }

        if (action == "up") {
            depth -= num;
        }

        cout << "Depth: " << depth << " ? Position: " << position << " ?? Mul: " << (depth * position) << endl;
    }
}
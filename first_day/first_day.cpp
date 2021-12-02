#include <iostream>
#include <fstream>

using namespace std;

void solve_first_day(std::ifstream &stream) {
    string line;
    int curr, c = 0, prev = 0;
    while (getline(stream, line)) {
        curr = atoi(line.c_str());

        if (prev != 0 && prev < curr) c++;

        prev = curr;
    }

    cout << "Total: " << c << endl;
}

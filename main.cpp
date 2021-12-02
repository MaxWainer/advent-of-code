#include <iostream>
#include <fstream>
#include "first_day/first_day.hpp"
#include "second_day/second_day.hpp"

using namespace std;

int main(int argc, char** argv) {
    int day; cin >> day;

    string file_name("input.txt");

    ifstream stream(file_name);

    if (!stream.is_open()) throw exception();

    switch (day) {
        case 1:
            solve_first_day(stream);
            break;
        case 2:
            solve_second_day(stream);
            break;
    }

    stream.close();

    return 0;
}
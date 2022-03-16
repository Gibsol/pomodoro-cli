#ifndef USER_INPUT_H
#define USER_INPUT_H
#include <iostream>

const char EXIT_KEY = 'n';
int work;
int rest;
int total_time;

void user_count() {
    std::cout << "Enter how many minutes would you want to work: "; std::cin >> work;
    total_time += work;
    std::cout << "Enter how many minutes would you want to rest: "; std::cin >> rest;
}


#endif
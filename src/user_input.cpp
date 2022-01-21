#include <iostream>

int work;
int rest;
int total_time;

void user_count(){
  std::cout << "enter how many minutes would you want to work: ";
  std::cin >> work;

  total_time += work;

  std::cout << "enter how many minutes would you want to rest: ";
  std::cin >> rest;
}

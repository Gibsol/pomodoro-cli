#include <iostream>
#include <unistd.h>
#include <iomanip>
#include "user_input.cpp"

const int minute = 60;

int rest_seconds;
int rest_minutes;
int work_seconds;
int work_minutes;

void display_timer(){
  system("clear");
  std::cout << std::endl;

  std::cout << std::setw(25);
  std::cout << "POMODORO" << std::endl;
}

void pomodoro_work(){
  while(true){
    sleep(1);
    display_timer();

    std::cout << std::setw(27);
    std::cout << "TIME TO WORK" << std::endl;
    std::cout << std::setw(20);
    std::cout << "" << work_minutes << work_seconds << std::endl;

    work_seconds++;

    if(work_seconds == minute){
      work_minutes++;
      work_seconds = 0;
    }

    if(work_minutes == work) break;
  }
}

void pomodoro_rest(){
  while(true){
    sleep(1);
    display_timer();

    std::cout << std::setw(27);
    std::cout << "TIME TO REST" << std::endl;
    std::cout << std::setw(20);
    std::cout << "" << rest_minutes << rest_seconds << std::endl;

    rest_seconds++;

    if(rest_seconds == minute){
      rest_minutes++;
      rest_seconds = 0;
    }

    if(rest_minutes == rest) break;
  }
}

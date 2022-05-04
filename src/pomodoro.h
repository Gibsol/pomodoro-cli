#ifndef POMODORO_H
#define POMODORO_H
#include <iostream>
#include <unistd.h>
#include <iomanip>
#include "user_input.h"

class Pomodoro {
private:
    const int MINUTE = 60;
    int rest_seconds;
    int rest_minutes;
    int work_seconds;
    int work_minutes;
public:
    Pomodoro();

    void set_work_minutes(int work_minutes);
    void set_work_seconds(int work_seconds); 

    void display_timer(); 
    void pomodoro_work(); 
    void pomodoro_rest(); 
};

#endif
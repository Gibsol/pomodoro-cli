#ifndef POMODORO_H
#define POMODORO_H


#include <iostream>
#include <unistd.h>
#include <iomanip>

namespace pomodoro {

class Pomodoro {
private:
    int work;
    int rest;
    int total_time;

    int rest_seconds;
    int rest_minutes;
    int work_seconds;
    int work_minutes;
public:
    Pomodoro();

    int get_work();
    int get_rest();
    int get_total_time();

    void set_work(int);
    void set_rest(int);
    void set_work_minutes(int);
    void set_work_seconds(int); 

    void user_count();
    void display_timer(); 
    void pomodoro_work(); 
    void pomodoro_rest(); 
};

}


#endif

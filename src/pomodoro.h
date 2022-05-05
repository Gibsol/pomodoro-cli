#ifndef POMODORO_H
#define POMODORO_H


#include <iostream>
#include <unistd.h>
#include <iomanip>

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
    const int MINUTE = 60;
    const char EXIT_KEY = 'n';

    Pomodoro();

    int get_work();
    int get_rest();
    int get_total_time();

    void set_work(int work);
    void set_rest(int rest);
    void set_work_minutes(int work_minutes);
    void set_work_seconds(int work_seconds); 

    void user_count();
    void display_timer(); 
    void pomodoro_work(); 
    void pomodoro_rest(); 
};


#endif

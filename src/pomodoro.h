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
    void display_timer() {
        system("clear");
        std::cout << std::endl << std::setw(25) << "POMODORO\n";
    }

    void pomodoro_work() {
        while(true) {
            sleep(1);
            display_timer();
            std::cout << std::setw(27) << "TIME TO WORK\n" << std::setw(20) << work_minutes << work_seconds << std::endl;
            work_seconds++;

            if(work_seconds == MINUTE) {
                work_minutes++;
                work_seconds = 0;
            }

            if(work_minutes == work) break;
        }
    }

    void pomodoro_rest() {
        while(true) {
            sleep(1);
            display_timer();
            std::cout << std::setw(27) << "TIME TO REST\n" << std::setw(20) << rest_minutes << rest_seconds << std::endl;
            rest_seconds++;

            if(rest_seconds == MINUTE) {
                rest_minutes++;
                rest_seconds = 0;
            }

            if(rest_minutes == rest) break;
        }
    }

    void set_work_minutes(int work_minutes) { this->work_minutes = work_minutes; }
    void set_work_seconds(int work_seconds) { this->work_seconds = work_seconds; } 
            
};

#endif
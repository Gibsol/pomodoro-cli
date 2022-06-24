#include "pomodoro.h"

const int MINUTE = 60;
const char EXIT_KEY = 'n';

Pomodoro::Pomodoro() : rest_seconds(0), rest_minutes(0), work_seconds(0), work_minutes(0) {}

int Pomodoro::get_work() { return work; }
int Pomodoro::get_rest() { return rest; }
int Pomodoro::get_total_time() { return total_time; }

void Pomodoro::set_work(int work) { this->work = work; } 
void Pomodoro::set_rest(int rest) { this->rest = rest; }
void Pomodoro::set_work_minutes(int work_minutes) { this->work_minutes = work_minutes; }
void Pomodoro::set_work_seconds(int work_seconds) { this->work_seconds = work_seconds; }

void Pomodoro::display_timer() {
    system("clear");
    std::cout << std::endl << std::setw(25) << "POMODORO\n";
}

// work timer
void Pomodoro::pomodoro_work() {
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

// rest timer
void Pomodoro::pomodoro_rest() {
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

void Pomodoro::user_count() {
    printf("\e[?25l");
    system("clear");
    std::cout << "Enter how many minutes would you want to work: "; std::cin >> work;
    total_time += work;
    std::cout << "Enter how many minutes would you want to rest: "; std::cin >> rest;
}

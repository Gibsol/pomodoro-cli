#include <iostream>
#include "pomodoro.h"
#include "user_input.h"

int main() {
    Pomodoro timer;

    user_count();

    timer.pomodoro_work();
    timer.pomodoro_rest();    
}
#include "pomodoro.cpp"

namespace pomodoro {

int main() {
    Pomodoro timer;
    char user_exit;

// checks whether the user have entered the valid argument or not
    while(user_exit != EXIT_KEY) {
        CHECK:try {
            timer.user_count();

            if(timer.get_work() <= 0 | timer.get_rest() <= 0) 
                throw(timer.get_work(), timer.get_rest());
        }
        catch(int argument_error) {
            system("clear");
            std::cerr << "Invalid argument";
            sleep(2);
            system("clear");
            goto CHECK; // if the argument is invalid, it goes back to the "try" section and tries again
            
            return -1;
        }

        timer.pomodoro_work();
        timer.pomodoro_rest();    

        timer.set_work(0);
        timer.set_rest(0);
        timer.set_work_minutes(0);
        timer.set_work_seconds(0);

        system("clear");
        std::cout <<  "You have been working for " << timer.get_total_time() << " minute(s)" 
            << std::endl << "Would you want to continue? Y/n" << std::endl; std::cin >> user_exit;
    } 
    return 0;
}
    
}

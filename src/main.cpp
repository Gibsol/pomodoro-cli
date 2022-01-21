#include <iostream>
#include <unistd.h>
#include <iomanip>
#include "timer.cpp"


bool time_correct;  // sets to true, when the user enters the correct value of time (>=0)

char user_exit;
char exit_key;

int main(){
  while(user_exit != 'n'){
    while(time_correct != true){
      try{
        user_count();
      if(work <= 0 | rest <= 0){
          throw(work);
          throw(rest);
        }
      else time_correct = true;
      }
      catch(int time_check){
        std::cerr << "you have entered the wrong amount of time" << std::endl;
      }
  }    

    pomodoro_work();
    pomodoro_rest();
   
    work = 0;
    rest = 0;
    work_minutes = 0;
    work_seconds = 0;

    system("clear"); 
  
    std::cout << "you have been working for " << total_time << " minute(s)" << std::endl;
    std::cout << "would you want to continue? Y/n" << std::endl;
    std::cin >> user_exit;
  }
  return 0;
}


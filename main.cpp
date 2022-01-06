#include <iostream>
#include <unistd.h>
#include <iomanip>


int minutes_p;
int seconds_p;
int work;
int rest;
char user_exit;


// creates the choice for a user of how many minutes would they want to work and rest.
void user_count(){ 
  std::cout << "enter how many minutes would you want to work: ";
  std::cin >> work;
  
  std::cout << "enter how many minutes would you want to rest: ";
  std::cin >> rest;
}

void display_timer(){
  system("clear");
  std::cout << std::endl;

  std::cout << std::setw(25);
  std::cout << "POMODORO" << std::endl;
}

// timer for the work.
void pomodoro_work(){
  while(true){
    sleep(1);
    display_timer();
    
    std::cout << std::setw(27);
    std::cout << "TIME TO WORK" << std::endl;
    std::cout << std::setw(20);
    std::cout << "" << minutes_p << seconds_p << std::endl;

    seconds_p++;
    
    if(seconds_p == 60){
      minutes_p++;
      seconds_p = 0;
    }
    if(minutes_p == work) break;
  }
}

// timer for the rest.
void pomodoro_rest(){
  while(true){
    sleep(1); 
    display_timer();

    std::cout << std::setw(27);
    std::cout << "TIME TO REST" << std::endl;
    std::cout << std::setw(20);
    std::cout << "" << minutes_p <<seconds_p << std::endl;
    
    seconds_p++;

    if(seconds_p == 60){
      minutes_p++;
      seconds_p = 0;
    }
    
    if(minutes_p == rest) break;; 
  }
}

int main(){
  while(user_exit != 'n'){
    user_count();
    
    pomodoro_work();
    pomodoro_rest();
    
    system("clear"); 
    
    std::cout << "would you want to continue? Y/n" << std::endl;
    std::cin >> user_exit;
  }
  return 0;
}

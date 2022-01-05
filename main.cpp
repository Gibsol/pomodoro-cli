#include <iostream>
#include <stdlib.h>
#include <unistd.h>
#include <iomanip>


using namespace std;


int rest_seconds;
int work_seconds;
int work_minutes;
int rest_minutes;
int work;
int rest;
char user_exit;

// creates the choice for a user of how many minutes would they want to work and rest.
void user_count(){ 
  cout << "enter how many minutes would you want to work: ";
  cin >> work;
  
  cout << "enter how many minutes would you want to rest: ";
  cin >> rest;
}

void display_work_timer(){
  system("clear");
  cout << endl;

  cout << setw(25);
  cout << "POMODORO" << endl;
  
  cout << setw(27);
  cout << "TIME TO WORK" << endl;
  
  cout << setw(20);
  cout << "" << work_minutes << work_seconds << endl;
}

void display_rest_timer(){
  system("clear");
  cout << endl;

  cout << setw(25);
  cout << "POMODORO" << endl;
  
  cout << setw(27);
  cout << "TIME TO REST" << endl;

  cout << setw(20);
  cout << "" << rest_minutes << rest_seconds << endl;
}

// timer for the work.
void pomodoro_work(){
  while(true){
    sleep(1);
    display_work_timer();
    
    work_seconds++;

    if(work_seconds == 60){
      work_minutes++;
      work_seconds = 0;
    }
    if(work_minutes == work) break;
  }
}

// timer for the rest.
void pomodoro_rest(){
  while(true){
    sleep(1);
    display_rest_timer();
    
    rest_seconds++;

    if(rest_seconds == 60){
      rest_minutes++;
      rest_seconds = 0;
    }
    if(rest_minutes == rest) break;; 
  }
}


int main(){
  while(user_exit != 'n'){
    user_count();
    
    pomodoro_work();
    pomodoro_rest();
    
    system("clear"); 
    
    cout << "would you want to continue? Y/n" << endl;
    cin >> user_exit;
  }
  return 0;
}

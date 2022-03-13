/*The logic:
Scissors cuts Paper.
Paper covers Rock.
Rock crushes Lizard.
Lizard poisons Spock.
Spock smashes Scissors.
Scissors decapitate Lizard.
Lizard eats Paper.
Paper disproves Spock.
Spock vaporizes Rock.
(and as it always has) Rock crushes Scissors.
We will first tackle Rock, Paper, Scissors first, before making it into Rock, Paper, Scissors, Lizard, Spock! */

#include<iostream>
#include<stdlib.h>
#include<ctime>
int main(){
  
  srand(time(NULL));  //random number on every execution
  int computer = rand() % 5 + 1;
  int user = 0;
  //introduction to the game
  std::cout<<"======================="<<std::endl;
  std::cout<<"ROCK, PAPER, SCISSORS, LIZARD, SPOCK SHOOT!!!"<<std::endl;
  std::cout<<"======================="<<std::endl;

  //user choice
  std::cout<<"1) Rock "<<std::endl;
  std::cout<<"2) Paper "<<std::endl;
  std::cout<<"3) Scissors "<<std::endl;
  std::cout<<"4) Lizard"<<std::endl;
  std::cout<<"5) Spock"<<std::endl;

  std::cout<<"Shoot!...  ";
  std::cin>>user;

  while(user > 5){
    std::cout<<"Please enter a valid input: ";
    std::cin>>user;
  }

  //to display computer and user choice
  if(user == 1){
    std::cout<<"You choose Rock"<<std::endl;
  }else if(user == 2){
    std::cout<<"You chosoe paper"<<std::endl;
  }else if(user == 3){
    std::cout<<"You chosoe Scissors"<<std::endl;
  }else if(user == 4){
    std::cout<<"You choose Lizard"<<std::endl;
  }else{
    std::cout<<"You choose Spock"<<std::endl;
  }

  if(computer == 1){
    std::cout<<"Computer choice is Rock"<<std::endl;
  }else if(computer == 2){
    std::cout<<"Computer choice is paper"<<std::endl;
  }else if(computer == 3){
    std::cout<<"Computer choice is Scissors"<<std::endl;
  }else if(computer == 4){
    std::cout<<"Computer choice is Lizard"<<std::endl;
  }else{
    std::cout<<"Computer choice is Spock"<<std::endl;
  }

  //the logic

  if(user == computer){
    std::cout<<"It's a tie"<<std::endl;
    //rock
  }else if(user == 1 && computer == 2){
    std::cout<<"You Lose"<<std::endl;
  }else if(user == 1 && computer == 3){
    std::cout<<"You win"<<std::endl;
  }else if(user == 1 && computer == 4){
    std::cout<<"You win"<<std::endl;
  }else if(user == 1 && computer == 5){
    std::cout<<"You Lose"<<std::endl;
    //paper
  }else if(user == 2 && computer == 1){
    std::cout<<"You win"<<std::endl;
  }else if(user == 2 && computer == 3){
    std::cout<<"You Lose"<<std::endl;
  }else if(user == 2 && computer == 4){
    std::cout<<"You Lose"<<std::endl;
  }else if(user == 2 && computer == 5){
    std::cout<<"You win"<<std::endl;
    //scissors
  }else if(user == 3 && computer == 1){
    std::cout<<"You Lose"<<std::endl;
  }else if(user == 3 && computer == 2){
    std::cout<<"You win"<<std::endl;
  }else if(user == 3 && computer == 4){
    std::cout<<"You win"<<std::endl;
  }else if(user == 3 && computer == 5){
    std::cout<<"You Lose"<<std::endl;
    //lizard
  }else if(user == 4 && computer == 1){
    std::cout<<"You Lose"<<std::endl;
  }else if(user == 4 && computer == 2){
    std::cout<<"You win"<<std::endl;
  }else if(user == 4 && computer == 3){
    std::cout<<"You Lose"<<std::endl;
  }else if(user == 4 && computer == 5){
    std::cout<<"You win"<<std::endl;
    //spock
  }else if(user == 5 && computer == 1){
    std::cout<<"You win"<<std::endl;
  }else if(user == 5 && computer == 2){
    std::cout<<"You Lose"<<std::endl;
  }else if(user == 5 && computer == 3){
    std::cout<<"You win"<<std::endl;
  }else if(user == 5 && computer == 4){
    std::cout<<"You Lose"<<std::endl;
  }else{
    std::cout<<"No match found!!!"<<std::endl;
  }

  return 0;
}
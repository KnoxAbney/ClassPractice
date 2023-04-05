#include <iostream>
#include "profile.hpp"

int main() {

  std::string nname;
  int nage;
  std::string ncity;
  std::string ncountry;
  std::string npronouns;
  std::string nhobbies;
  int answer;
  bool end = false;


  Profile James("James", 26, "Winder", "United States", "He/Him", "Video Games, anime, korean dramas" );

  James.getProfile();

  while(end == false){

    std::cout << "What would you like to do?\n\n";
    std::cout << "1.) Create new profile\n";
    std::cout << "2.) Edit existing profile \n";
    std::cout << "3.) View existing profile\n";
    std::cout << "4.) Delete profile\n";
    std::cout << "5.) Exit application\n\n";
    std::cout << "Please type in a number to continue.\n";

    std::cin >> answer;

    if(answer == 1){

      std::cout << "Please enter your name:\n";
      std::cin >> nname;

      std::cout << "How old are you?";
      std::cin >> nage;

      std::cout << "What country do you live in?";
      std::cin >> ncountry;

      std::cout << "What city do you live in?";
      std::cin >> ncity;

      std::cout << "What are your pronouns?";
      std::cin >> npronouns;

      std::cout << "Write out some of your hobbies:\n";
      std::cin >> nhobbies;

    }else if(answer == 2){
      std::cout << "What would you like to edit?\n";
      std::cout << "1.) name\n";
      std::cout << "2.) age\n";
      std::cout << "3.) location\n";
      std::cout << "4.) pronouns\n";
      std::cout << "5.) hobbies\n";

      std:: >> answer;

      if (answer == 1){

        std::cout << "Please enter your edited name.\n";
        std::cin >> nname;

      }else if (answer == 2){

        std::

      }


    }else if(answer == 3){

    }elseif(answer == 4){

      

    }elseif(answe == 5){

      std::cout << "Goodbye.\n";
      end = true;

    }else{

    std::cout << "Please enter the number associated with one of the options.\n";
    continue;

    }
  }

}

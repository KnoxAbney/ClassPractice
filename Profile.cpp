#include <iostream>
#include "profile.hpp"

  Profile::Profile(std::string nname, int nage, std::string ncity, std::string ncountry, std::string npronouns, std::string nhobby)
  : name(nname), age(nage), city(ncity), country(ncountry), pronouns(npronouns), hobbies(nhobby){}

  void Profile::getProfile(){

    std::cout << "Your current profile:\n\n";
    std::cout << "Name: " << name << "\n";
    std::cout << "Age: " << age << "\n";
    std::cout << "City: " << city << ", " << country << "\n";
    std::cout << "Pronouns: " << pronouns << "/n";
    std::cout << "Hobbies: " << hobbies << "/n";

  }

  std::string Profile::addHobby(std::string nhobby){

    hobbies = hobbies.append("\n");
    hobbies = hobbies.append(nhobby);

  }




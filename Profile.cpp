#include <iostream>
#include "profile.hpp"

Profile::Profile(std::string nname, int nage, std::string ncity, std::string ncountry, std::string npronouns)
  : name(nname), age(nage), city(ncity), country(ncountry), pronouns(npronouns){
    
  }

  std::string Profile::viewProfile(){
    std::string output = "User name: " + name + "\n";
    output += "User age: " + std::to_string(age) + "\n";
    output += "User area: " + city + ", " + country + "\n";
    output += "User pronouns: " + pronouns + "\n";

    output += "User hobbies: ";
    for (int i=0; i < hobbies.size(); i++){
      if(i == hobbies.size()-1){
        output += hobbies[i] + "\n";
      }else{
      output += hobbies[i] + ", ";
      }
    }

    return output;
  }

  void Profile::newHobby(std::string nhobby){
    hobbies.push_back(nhobby);
  }

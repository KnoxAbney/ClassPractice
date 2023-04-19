#include <vector>


class Profile{
  private:
    std::string name;
    int age;
    std::string city;
    std::string country;
    std::string pronouns;
    std::vector<std::string> hobbies;

  public:

    Profile(std::string nname, int nage, std::string ncity, std::string ncountry, std::string npronouns = "they/them");
    
   std::string viewProfile();

   void newHobby(std::string nhobby);

};

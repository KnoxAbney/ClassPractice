#include <vector>

class Profile{

  std::string name;
  int age;
  std::string city;
  std::string country;
  std::string pronouns;
  std::string hobbies;

  public:

  Profile(std::string nname, int nage, std::string ncity, std::string ncountry, std::string npronouns, std::string nhobby);

  void getProfile();

  std::string addHobby(std::string nhobby);

};

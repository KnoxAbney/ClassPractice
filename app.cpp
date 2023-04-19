#include <iostream>
#include "profile.hpp"

int main() {

Profile Sam("Sam Drakkila", 30, "New York", "USA", "he/him");

Sam.newHobby("drinking pina coladas");
Sam.newHobby("getting caught in the rain");

std::cout << Sam.viewProfile();

}

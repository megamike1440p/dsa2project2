#include "Input.hpp"

Input::Input(){
  nInput();
  lambdaInput();
  muInput();
  mInput();
}

void Input::nInput(){
  std::cout << "please enter the number of arrivals to simulate, (1000 - 5000)" << std::endl;
  std:: cin >> n;
}

void Input::lambdaInput(){
  std::cout << "please enter the average number of arrivals in a time period" << std::endl;
  std:: cin >> lambda;
}

void Input::muInput(){
  std::cout << "please enter the number of customers served in a time period" << std::endl;
  std:: cin >> mu;
}
void Input::mInput(){
  std::cout << "please enter the number of service channels to be used (1-10)" << std::endl;
  std:: cin >> m;
}

int Input::getN(){
  return n;
}
float Input::getLambda(){
  return lambda;
}
float Input::getMu(){
  return mu;
}
int Input::getM(){
  return m;
}

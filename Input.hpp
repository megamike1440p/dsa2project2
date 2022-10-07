#ifndef INPUT_HPP
#define INPUT_HPP
#include <iostream>

class Input{
  private:
    int n; //arrivals 1000-5000
    float lambda; //avg arrivals in a time period
    float mu; //average number served in a period
    int m; //number of service channels 1-10
  
  public:
    Input();
    void nInput();
    void lambdaInput();
    void muInput();
    void mInput();

    int getN();
    float getLambda();
    float getMu();
    int getM();
};

#endif

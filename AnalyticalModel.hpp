/***************************************************************
  Student Name: Michael Whitten
  File Name: AnalyticalModel.hpp
  Assignment number: Project 2

  Calculates analytical model data based on user input
***************************************************************/
#ifndef ANALYTICALMODEL_HPP
#define ANALYTICALMODEL_HPP
#include <iostream>

class AnalyticalModel{

    private:
        float po;
        float l;
        float w;
        float lq;
        float wq;
        float rho;
        float lambda;
        float mu;
        int n;
        int m;

    public:
        AnalyticalModel();
        float getPo();
        float getL();
        float getW();
        float getLq();
        float getWq();
        float getRho();
        float pow(float base, float exp);
        int factorial(int num);
        
};

#endif
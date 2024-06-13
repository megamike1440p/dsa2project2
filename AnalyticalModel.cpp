/***************************************************************
  Student Name: Michael Whitten
  File Name: AnalyticalModel.cpp
  Assignment number: Project 2

Calculates analytical model data based on user input
***************************************************************/
#include "AnalyticalModel.hpp"
#include "Input.hpp"
#include <cmath>
#include <iostream>

AnalyticalModel::AnalyticalModel()
{
    Input input;
    this->lambda = input.getLambda();
    this->mu = input.getMu();
    this->m = input.getM();
    this->n = input.getN();

    std::cout << "Po: " << getPo() << std::endl;
    std::cout << "L: " << getL() << std::endl;
    std::cout << "W: " << getW() << std::endl;
    std::cout << "Lq: " << getLq() << std::endl;
    std::cout << "Wq: " << getWq() << std::endl;
}

float AnalyticalModel::getPo()
{
    float sum = 0;

    for (int i = 0; i < m; i++) {
        sum += (1 / (factorial(i))) * (pow(lambda / mu, i));
    }

    float rho = lambda / (m * mu);
    po = 1.0 / ((sum) + (1.0 / (factorial(m))) * (pow(lambda / mu, m)) * ((1.0) / (1.0 - rho)));
    return po;
}

float AnalyticalModel::getL()
{
    float rho = lambda / (m * mu);
    float lq = getLq();
    l = lq + (lambda / mu);
    return l;
}

float AnalyticalModel::getW()
{
    w = getL() / lambda;
    return w;
}

float AnalyticalModel::getLq()
{
    float rho = lambda / (m * mu);
    lq = (((pow(lambda / mu, m) * rho) / (factorial(m) * pow(1 - rho, 2))) * getPo());
    return lq;
}

float AnalyticalModel::getWq()
{
    wq = getLq() / lambda;
    return wq;
}

float AnalyticalModel::getRho()
{
    rho = lambda / (m * mu);
    return rho;
}

float AnalyticalModel::pow(float base, float exp)
{
    if (exp == 0) {
        return 1;
    }
    float result = base;
    for (int i = 0; i < exp - 1; i++) {
        result *= base;
    }
    return result;
}

int AnalyticalModel::factorial(int num)
{
    int factorial = 1;
    for (int i = 2; i <= num; i++)
        factorial *= i;
    return factorial;
}

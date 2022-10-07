/***************************************************************
  Student Name: Michael Whitten
  File Name: Customer.cpp
  Assignment number: Project 2

Stores information on customer arrival and departure times
***************************************************************/
#include "Customer.hpp"

Customer::Customer(float arrivalTime, float startOfServiceTime, float departureTime){
    this->arrivalTime = arrivalTime;
    this->startOfServiceTime = startOfServiceTime;
    this->departureTime = departureTime;
}
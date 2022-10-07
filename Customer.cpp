#include "Customer.hpp"

Customer::Customer(float arrivalTime, float startOfServiceTime, float departureTime){
    this->arrivalTime = arrivalTime;
    this->startOfServiceTime = startOfServiceTime;
    this->departureTime = departureTime;
}
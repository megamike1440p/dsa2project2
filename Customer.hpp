/***************************************************************
  Student Name: Michael Whitten
  File Name: Customer.hpp
  Assignment number: Project 2

Stores information on customer arrival and departure times
***************************************************************/
#ifndef CUSTOMER_HPP
#define CUSTOMER_HPP

class Customer
{
    private:
        float arrivalTime;
        float startOfServiceTime;
        float departureTime;
        Customer *nextCust; // for linked FIFO

    public:
        Customer(float arrivalTime, float startOfServiceTime, float departureTime);
        
};

#endif
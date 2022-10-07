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
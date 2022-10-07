#ifndef EVENT_HPP
#define EVENT_HPP

#include "Customer.hpp"
#include "PQ.hpp"


    class Event{
        private:
            int numAvailStations;

        public:
            Event();
            void arrivalEvent();
            void departureEvent();
            void firstArrivals();
        
    };

#endif
/***************************************************************
  Student Name: Michael Whitten
  File Name: PQ.hpp
  Assignment number: Project 2

A priority queue for storing events
***************************************************************/
#ifndef PQ_HPP
#define PQ_HPP
#include <vector>
#include <stdexcept>
template <typename Comparable>
class PQ{

    public:
        explicit PQ(int capacity = 200);
        explicit PQ(const std::vector<Comparable> &items);

        bool isEmpty() const;
        const Comparable & findMin() const;

        void insert(const Comparable &x);
        void deleteMin();
        void deleteMin(Comparable &minItem);
        void makeEmpty();

    private:
        int currentSize;
        std::vector<Comparable> array;

        void buildHeap();
        void percolateDown(int hole);
};

#endif
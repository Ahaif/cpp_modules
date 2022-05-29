#ifndef SPAN_HPP
#define SPAN_HPP
#include <iostream>
#include <algorithm>
#include <vector>


class Span{

    private :
    std :: vector<int> _vec;
    unsigned int _N;

    public:
    Span(unsigned int N);
    Span(Span const & src);
    ~Span();
    Span &operator = (const Span &src);

    class NoSpan: public std::exception
	{
		virtual const char* what() const throw();
	};

	class NoSpaceLeft: public std::exception
	{
		virtual const char* what() const throw();
	};

    void addNumber(int n);
    int shortSpan();
    int longestSpan();

    template <typename T>
    void addNumber(T begin, T end)
    {
        int dist = std:: distance (begin, end);
        if (dist + this->_vec.size() > this->_N)
            throw Span :: NoSpaceLeft();
        this->_vec.insert(this->_vec.end(), begin, end);
    }
};




#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarahho <abarahho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/21 15:58:42 by abarahho          #+#    #+#             */
/*   Updated: 2025/08/21 16:42:07 by abarahho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <vector>
# include <algorithm> 

class Span
{
private:
    std::vector<int> numbers;
    unsigned int N;
public:
    Span();
    Span(unsigned int N);
    Span(const Span&);
    Span& operator=(const Span&);
    ~Span();

    void    addNumber(int);
    int     shortestSpan();
    int     longestSpan();

    class SpanIsFullException : public std::exception
    {
        virtual const char* what() const throw();
    };

    class NotEnoughNumbersException : public std::exception
    {
        virtual const char* what() const throw();
    }; 
};

#endif
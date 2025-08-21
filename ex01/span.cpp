/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarahho <abarahho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/21 16:00:46 by abarahho          #+#    #+#             */
/*   Updated: 2025/08/21 16:39:29 by abarahho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"
#include <numeric>

// Exceptions
const char* Span::SpanIsFullException::what() const throw() {
    return "Span is full";
}

const char* Span::NotEnoughNumbersException::what() const throw() {
    return "Not enough numbers to find a span";
}

// Orthodox Canonical Form
Span::Span() : N(0) {}

Span::Span(unsigned int N) : N(N) {
    this->numbers.reserve(N);
}

Span::Span(const Span& other) : numbers(other.numbers), N(other.N) {}

Span& Span::operator=(const Span& other) {
    if (this != &other) {
        this->numbers = other.numbers;
        this->N = other.N;
    }
    return *this;
}

Span::~Span() {}

// Fonctions membres
void Span::addNumber(int number) {
    if (this->numbers.size() >= this->N) {
        throw SpanIsFullException();
    }
    this->numbers.push_back(number);
}

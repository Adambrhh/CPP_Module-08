/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarahho <abarahho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/21 10:55:11 by abarahho          #+#    #+#             */
/*   Updated: 2025/08/21 16:35:23 by abarahho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

int main()
{
    Span sp = Span(5);
    sp.addNumber(6);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);
    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;
    return 0;
}

// int main()
// {
//     // Test de l'énoncé
//     std::cout << "--- Test de l'énoncé ---" << std::endl;
//     Span sp = Span(5);
//     sp.addNumber(6);
//     sp.addNumber(3);
//     sp.addNumber(17);
//     sp.addNumber(9);
//     sp.addNumber(11);
//     std::cout << sp.shortestSpan() << std::endl;
//     std::cout << sp.longestSpan() << std::endl;

//     // Test de la gestion des exceptions
//     std::cout << "\n--- Test des exceptions ---" << std::endl;
//     try {
//         sp.addNumber(1);
//     } catch (const std::exception& e) {
//         std::cerr << "Erreur: " << e.what() << std::endl;
//     }

//     // Test avec 1 seul élément
//     Span sp2(1);
//     sp2.addNumber(100);
//     try {
//         sp2.shortestSpan();
//     } catch (const std::exception& e) {
//         std::cerr << "Erreur: " << e.what() << std::endl;
//     }

//     // Test de l'ajout d'une plage de 10000 nombres
//     std::cout << "\n--- Test avec 10000 nombres ---" << std::endl;
//     Span sp3(10000);
//     std::vector<int> rangeToAdd(10000);
//     std::iota(rangeToAdd.begin(), rangeToAdd.end(), 1); // Rempli de 1 à 10000

//     sp3.addRange(rangeToAdd.begin(), rangeToAdd.end());
//     std::cout << "Shortest span (devrait être 1): " << sp3.shortestSpan() << std::endl;
//     std::cout << "Longest span (devrait être 9999): " << sp3.longestSpan() << std::endl;
    
//     return 0;
// }
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egermen <egermen@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 15:08:35 by egermen           #+#    #+#             */
/*   Updated: 2024/12/02 15:08:35 by egermen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include <iostream>

int main() 
{
    const int numAnimals = 10;
    Animal* animals[numAnimals];

    for (int i = 0; i < numAnimals; ++i) {
        if (i < numAnimals / 2) {
            animals[i] = new Dog();
        } else {
            animals[i] = new Cat();
        }
    }

    for (int i = 0; i < numAnimals; ++i) {
        std::cout << animals[i]->getType() << " makes sound: ";
        animals[i]->makeSound();
    }

    for (int i = 0; i < numAnimals; ++i) {
        delete animals[i];
    }

    return 0;
}

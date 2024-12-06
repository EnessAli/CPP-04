/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egermen <egermen@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 15:06:52 by egermen           #+#    #+#             */
/*   Updated: 2024/12/02 15:06:52 by egermen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : type("") {
    std::cout << "Animal created" << std::endl;
}

Animal::Animal(const Animal &other) : type(other.type) {
    std::cout << "Animal copied" << std::endl;
}

Animal &Animal::operator=(const Animal &other) {
    if (this != &other) 
    {
        type = other.type;
        std::cout << "Animal assigned" << std::endl;
    }
    return *this;
}

Animal::~Animal() {
    std::cout << "Animal destroyed" << std::endl;
}

void Animal::makeSound() const {
    std::cout << "Some generic animal sound" << std::endl;
}

std::string Animal::getType() const {
    return type;
}

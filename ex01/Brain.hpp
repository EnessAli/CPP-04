/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egermen <egermen@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 15:07:41 by egermen           #+#    #+#             */
/*   Updated: 2024/12/02 15:07:41 by egermen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <string>

class Brain {
private:
    std::string ideas[100];

public:
    Brain();
    ~Brain();
    Brain(const Brain& other);
    Brain& operator=(const Brain& other);
    std::string getIdea(int index) const;
    void setIdea(int index, const std::string& idea);
};

#endif

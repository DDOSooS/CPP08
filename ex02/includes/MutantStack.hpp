/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aghergho <aghergho@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-07-04 07:26:44 by aghergho          #+#    #+#             */
/*   Updated: 2025-07-04 07:26:44 by aghergho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <stack>
#include <iterator>
#include <deque>
#include <algorithm>

template <typename T>
class MutantStack : public std::stack<T>
{
    
    public:
        typedef typename std::stack<T>::container_type::iterator iterator;

        MutantStack():std::stack<T>()
        {
            std::cout << " [ MutantStack Constructor ] is being Called" << std::endl;
        }
        
        MutantStack(const MutantStack &other)
        {
            std::cout << " [ MutantStack Copy Constructor ] is being Called" << std::endl;
            this = other;
        }
        
        MutantStack & operator=(const MutantStack & other)
        {
            std::cout << " [ MutantStack Copy Assignement Operator] is being Called" << std::endl;
            if (this != &other)
            {
                this = MutantStack(other);
            }
            return *this;
        }
        
        ~MutantStack()
        {
            std::cout << " [ MutantStack deconstructor] is being Called" << std::endl;
        }
        
        iterator begin() 
        {
            return (this->c.begin());
        }

        iterator end() 
        {
            return (this->c.end());
        }
};

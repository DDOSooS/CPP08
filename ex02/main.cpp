/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aghergho <aghergho@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-07-04 07:28:27 by aghergho          #+#    #+#             */
/*   Updated: 2025-07-04 07:28:27 by aghergho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/MutantStack.hpp"

int main()
{
    MutantStack<int> mstack;
    mstack.push(5);
    mstack.push(17);
    std::cout << "[top ] : " <<mstack.top() << std::endl;
    mstack.pop();
    std::cout << mstack.size() << std::endl;
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    //[...]
    mstack.push(0);
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    ++it;
    --it;
    std::cout << "====== [ iterating ove stack element ] =======" << std::endl;
    while (it != ite)
    {
        std::cout << *it << std::endl;
        ++it;
    }
    std::stack<int> s(mstack);
    return 0;
}

    // std::list<int> mstack;
    // mstack.push_back(5);
    // mstack.push_back(17);
    // // std::cout << "[top ] : " <<mstack.top() << std::endl;
    // mstack.pop_back();
    // std::cout << mstack.size() << std::endl;
    // mstack.push_back(3);
    // mstack.push_back(5);
    // mstack.push_back(737);
    // //[...]
    // mstack.push_back(0);
    // std::list<int>::iterator it = mstack.begin();
    // std::list<int>::iterator ite = mstack.end();
    // ++it;
    // --it;
    // std::cout << "====== [ iterating ove stack element ] =======" << std::endl;
    // while (it != ite)
    // {
    //     std::cout << *it << std::endl;
    //     ++it;
    // }

#pragma once

#include "Human.hpp"

#include <algorithm>
#include <list>
#include <vector>

std::vector< char > foo(std::list< Human >& people)
{
    std::vector< char > retval(people.size());
    std::list< Human >::reverse_iterator it = people.rbegin();
    auto porownanie = [&](char d) { return it->isMonster() ? 'n' : 'y'; };
    std::for_each(retval.begin(), retval.end(), porownanie);

    return retval;
}

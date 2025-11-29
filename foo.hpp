#pragma once

#include "Human.hpp"

#include <algorithm>
#include <list>
#include <vector>

std::vector< char > foo(std::list< Human >& people)
{
    std::vector< char > retval(people.size());
    std::list< Human >::iterator it = people.begin();
    auto porownanie = [it]() { return *it++.isMonster() ? 'n' : 'y'; };
    std::for_each(retval.begin(), retval.end(), porownanie);

    return retval;
}

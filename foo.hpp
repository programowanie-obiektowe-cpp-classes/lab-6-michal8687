#pragma once

#include "Human.hpp"

#include <algorithm>
#include <list>
#include <vector>

std::vector< char > foo(std::list< Human >& people)
{
    std::vector<char> result;
    result.reserve(people.size());

    std::for_each(people.begin(), people.end(),
        [&](Human& h)
    {
        h.birthday();
        result.push_back(h.isMonster() ? 'n' : 'y');
    }
    );

    std::reverse(result.begin(), result.end());
}

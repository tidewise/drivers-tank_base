#ifndef _TANKPROJECT_TANK_HPP_
#define _TANKPROJECT_TANK_HPP_

#include <base/Time.hpp>

namespace tank_base
{
    struct Tank
    {
        base::Time time;
        double currentLevel;
    };

} // end namespace tank_base

#endif // _TANKPROJECT_TANK_HPP_

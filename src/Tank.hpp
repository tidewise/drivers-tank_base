#ifndef _TANKPROJECT_TANK_HPP_
#define _TANKPROJECT_TANK_HPP_

#include <base/Time.hpp>

namespace tank_base
{
    struct Tank
    {
        // Sample time
        base::Time time;

        // Percentage 0-1 of the tank
        double currentLevel;
    };

} // end namespace tank_base

#endif // _TANKPROJECT_TANK_HPP_

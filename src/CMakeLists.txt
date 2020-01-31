rock_library(tank_base
    SOURCES Dummy.cpp
    HEADERS Dummy.hpp)

rock_executable(tank_base_bin Main.cpp
    DEPS tank_base)


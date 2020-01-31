#include <boost/test/unit_test.hpp>
#include <tank_base/Dummy.hpp>

using namespace tank_base;

BOOST_AUTO_TEST_CASE(it_should_not_crash_when_welcome_is_called)
{
    tank_base::DummyClass dummy;
    dummy.welcome();
}

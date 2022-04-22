#include <boost/date_time.hpp>
#include <iostream>

int main()
{
    std::cout << "Hello boost:: datetime: " << boost:: posix_time:: second_clock::local_time() << '\n';
}

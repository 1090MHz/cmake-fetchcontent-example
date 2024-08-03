#include <fmt/core.h>
#include <iostream>

int main()
{
    fmt::print("Hello, world!\n");

    // Pause the console
    std::cout << "Press ENTER to exit...";
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    return 0;
}

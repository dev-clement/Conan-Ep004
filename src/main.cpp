#include <iostream>
#include <fmt/base.h>

int main() {
    #ifdef NDEBUG
    fmt::println("Release configuration");
    #else
    fmt::println("Debug configuration");
    #endif
    return EXIT_SUCCESS;
}
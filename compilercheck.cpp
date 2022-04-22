#include <iostream>

int main() {
#ifdef __clang__
    std::cout << "Clang is being used as the default compiler here and is version: " << __clang_major__ << "." << __clang_minor__ << "." << __clang_patchlevel__ << std::endl;
#elif defined(__GNUC__)
    std::cout  << "GCC is being used as the default compiler here and is version: " << __GNUC__ << "." << __GNUC_MINOR__ << "." << __GNUC_PATCHLEVEL__ << std::endl;
#elif defined(_MSC_VER)
    std::cout << "Microsoft is being used as the default compiler here and is version: " << _MSC_VER << std::endl;
#endif
}

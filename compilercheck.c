#include <stdio.h>

int main() {
#ifdef __clang__
    printf("Clang is being used as the default compiler here and is version: %d.%d.%d\n", __clang_major__, __clang_minor__, __clang_patchlevel__);
#elif defined(__GNUC__)
    printf("GCC is being used as the default compiler here and is version: %d.%d.%d\n",  __GNUC__, __GNUC_MINOR__, __GNUC_PATCHLEVEL__);
#elif defined(_MSC_VER)
    printf("Microsoft is being used as the default compiler here and is version: %d\n", _MSC_VER);
#endif
}

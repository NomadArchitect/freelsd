#include "head/memory.hpp"
#include "head/cstr.hpp"
#include "head/vga.hpp"
#include <stdint.h>

extern "C" {
    void kernelmain() {
        vga::initialise();
        vga::write("\n  ()-()\n.-(___)-. freelsd development kernel\n _<   >_  welcome 2 larrabyte's hell\n \\/   \\/");
    }
}

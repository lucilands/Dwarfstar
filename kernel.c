#include "kutils/types.h"
#include "drivers/vga.h"



void kentry(void) {
    term_init();
    print("Hello, kernel World!\n");
    print("Welcome to Dwarfstar OS\n");
}

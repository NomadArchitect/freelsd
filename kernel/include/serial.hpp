#ifndef FREELSD_KERNEL_SERIAL_HEADER
#define FREELSD_KERNEL_SERIAL_HEADER

#define SERIAL_COM1 0x3F8

namespace serial {
    // Initialise the serial port.
    void initialise(void);

    // Write a string to the serial port.
    void write(const char *str);
}

#endif
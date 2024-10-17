#include "barcode.h"
#include <serial.h>  // If this is part of the SDK


void setup_barcode_scanner() {
    serial_init(9600); // Adjust the baud rate as needed
}

char* read_barcode() {
    static char barcode[256];
    serial_read(barcode, sizeof(barcode));
    return barcode;
}

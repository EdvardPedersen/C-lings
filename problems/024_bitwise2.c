/**
 * In this program we need to extract and update data in a tiny cache
 * After we're done the cache should be filled in a specific way
 * We've embedded the data and address into a shared value 'addresses' with the format:
 *
 * [ TAG    | INDEX | DATA  ]
 * [ 4 BIT  | 3 BIT | 1 BIT ]
 *
 * The cache is structured as a multi-dimensional.
 * The first dimension is the index, the second is the tag.
 * Insert the data in the cache and output all the data from position [0][0] to [n][m] on the format
 * 
 * [0][0] = 0
 * [0][1] = 1
 * ...
 * [n][m] = 0
 * 
 * n = max index
 * m = max tag
 */
#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

unsigned char cache[7][15][1];

unsigned char addresses[105] = {
0b00000000,
0b00000011,
0b00000100,
0b00000110,
0b00001000,
0b00001011,
0b00001101,
0b00010001,
0b00010011,
0b00010100,
0b00010110,
0b00011000,
0b00011010,
0b00011101,
0b00100001,
0b00100010,
0b00100100,
0b00100110,
0b00101000,
0b00101010,
0b00101100,
0b00110000,
0b00110010,
0b00110100,
0b00110111,
0b00111000,
0b00111011,
0b00111100,
0b01000000,
0b01000010,
0b01000100,
0b01000110,
0b01001001,
0b01001010,
0b01001101,
0b01010000,
0b01010010,
0b01010101,
0b01010110,
0b01011001,
0b01011010,
0b01011101,
0b01100000,
0b01100011,
0b01100100,
0b01100111,
0b01101000,
0b01101010,
0b01101100,
0b01110001,
0b01110010,
0b01110101,
0b01110110,
0b01111001,
0b01111010,
0b01111100,
0b10000000,
0b10000011,
0b10000101,
0b10000110,
0b10001000,
0b10001010,
0b10001101,
0b10010001,
0b10010010,
0b10010100,
0b10010111,
0b10011000,
0b10011010,
0b10011101,
0b10100001,
0b10100010,
0b10100100,
0b10100110,
0b10101000,
0b10101011,
0b10101100,
0b10110000,
0b10110011,
0b10110100,
0b10110111,
0b10111001,
0b10111011,
0b10111100,
0b11000000,
0b11000010,
0b11000100,
0b11000110,
0b11001001,
0b11001010,
0b11001100,
0b11010001,
0b11010011,
0b11010101,
0b11010111,
0b11011001,
0b11011011,
0b11011101,
0b11100001,
0b11100011,
0b11100100,
0b11100110,
0b11101000,
0b11101010,
0b11101100};

void print_cache(){
    for(size_t index =0;index<sizeof(cache)/sizeof(cache[0]);index++){
        for(size_t tag=0;tag<sizeof(cache[0])/sizeof(cache[0][0]);tag++){
            printf("[%ld][%ld] = %d\n", index, tag, *cache[index][tag]);
        }
    }
}

void insert_cache(const unsigned char index, const unsigned char tag, const unsigned char data){
    *cache[index][tag] = data;
}

int
main(void){
    unsigned char idx_mask = 0b111;
    unsigned char data_mask = 0b10000000;

    unsigned char address;
    unsigned char tag;
    unsigned char index;
    unsigned char data;
    for(size_t i = 0;i<sizeof(addresses)/sizeof(addresses[0]);i++){
        address = addresses[i];
        tag = (address>>4);
        index = address & idx_mask;
        data = address & data_mask;
        insert_cache(index, tag, data);

    }

    print_cache();
    
    return 0;
}

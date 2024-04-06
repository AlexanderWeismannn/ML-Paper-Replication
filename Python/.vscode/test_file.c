#include <stdio.h>

int main(){
    unsigned int 24_bits = 0b110110100101010111110011;
    unsigned char R = (24_bits >> 16) & 0xFF;
    unsigned char G = (24_bits >> 8) & 0xFF;
    unsigned char B = 24_bits & 0xFF;

    printf("R: %u\nG: %u\n B: %u\n",R,G,B); 
}
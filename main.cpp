#include <iostream>

using namespace std;

char  nibble_to_hex(uint8_t i){
    switch(i){
    case 0:
        return '0';
    case 1:
        return '1';
    case 2:
        return '2';
    case 3:
        return '3';
    case 4:
        return '4';
    case 5:
        return '5';
    case 6:
        return '6';
    case 7:
        return '7';
    case 8:
        return '8';
    case 9:
        return '9';
    case 10:
        return 'A';
    case 11:
        return 'B';
    case 12:
        return 'C';
    case 13:
        return 'D';
    case 14:
        return 'E';
    case 15:
        return 'F';
    }

}

    void print_byte(uint8_t byte){

      uint8_t low = (byte & 0b00001111);
      uint8_t high = (byte & 0b11110000)>>4;
        cout<< nibble_to_hex(high)<< nibble_to_hex(low);
}
        int main() {
            uint8_t m=59;
            print_byte(m);
            return 0;
}
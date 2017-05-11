#include <iostream>
#include <cstring>

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

    void print_in_hex(const void* data, size_t size){
        auto p = reinterpret_cast<const uint8_t*>(data);
        for(size_t i=0; i< size; i++){
            print_byte(*(p+i));
            cout<<';';
        }

    }
  struct student{
  char name[17];
  uint16_t year;
  double middlemark;
  bool sex;
  int course;
  student* prefect;
};


        int main() {
            uint8_t m=59;
            print_byte(m);
            cout<<'\n';

            int k=47;
            print_in_hex(&k, sizeof(k));

            student s[3];
            strcpy(s[0].name,"Olga");
            s[0].year = 2016;
            s[0].middlemark = 4.4;
            s[0].sex = 0;
            s[0].course = 1;
            s[0].prefect = nullptr;
            strcpy(s[1].name,"Irina");
            s[1].year = 2016;
            s[1].middlemark = 4;
            s[1].sex = 0;
            s[1].course = 1;
            s[1].prefect = &s[0];
            strcpy(s[2].name,"Tanya");
            s[2].year = 2016;
            s[2].middlemark = 3.8;
            s[2].sex = 0;
            s[2].course = 1;
            s[2].prefect = &s[0];

            cout<<"\naddress massiva:"<<&s<<"\nsize massiva:"<<sizeof(s)<<"\naddress 1:" <<&s[0]<<"\n size 1:"
                    <<sizeof(s[0]) <<"\naddress 2:" <<&s[1]<<"\n size 2:"
                    <<sizeof(s[1]) <<"\naddress 3:"<<&s[2]<<"\n size 3:"
                    <<sizeof(s[2]) <<"\ni:";
                    print_in_hex(&s[0], sizeof(s[0]));
            return 0;


}
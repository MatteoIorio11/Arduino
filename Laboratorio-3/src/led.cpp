#include <Arduino.h>

class Led{

    public:
        Led::Led(int pin) {
            this->pin = pin;
        }
        void changeStatus(){
            this->status = !this->status;
        }
    
    private:
        int pin;
        int status=LOW;
};
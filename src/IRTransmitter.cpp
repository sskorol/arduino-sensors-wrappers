#include "IRTransmitter.hpp"

using namespace IRDevice;

IRTransmitter::IRTransmitter(uint8_t pin) : Sensor(pin) {
    ir = new IRsend(pin);
    ir->begin();
}

void IRTransmitter::send(Model deviceModel, uint64_t code) {
    switch (deviceModel) {
        case Model::SAMSUNG:
            ir->sendSAMSUNG(code, SAMSUNG_BITS, 1);
            break;
    }
}

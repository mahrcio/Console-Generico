#ifndef DEVICE_H
#define DEVICE_H

class Device
{
public:
    Device();
    ~Device();
    virtual void ligar() = 0;
protected:
bool onoff;

};

#endif // DEVICE_H

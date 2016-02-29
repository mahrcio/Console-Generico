#ifndef XBOX_H
#define XBOX_H

class Xbox
{
public:
    Xbox();
    ~Xbox();
    void conectarXboxLive();
    void playMusic();
    void playDVD();
private:
    bool conectadoXboxLive;
    bool kinectConectado;
};

#endif // XBOX_H

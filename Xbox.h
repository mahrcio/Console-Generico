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
    Xbox operator=(const Xbox &c );
    bool operator==(const Xbox &c );
    ostream &operator<<(ostream &os,Xbox &x);
    
private:
    bool conectadoXboxLive;
    bool kinectConectado;
};

#endif // XBOX_H

#ifndef XBOX_H
#define XBOX_H

class Xbox: public Console
{
public:
    Xbox();
    Xbox(const Xbox &x);
    
    ~Xbox();
    void conectarXboxLive();
    void playMusic();
    void playDVD();
    
    Xbox operator=(const Xbox &c );
    bool operator==(const Xbox &c );
    friend ostream &operator<<(ostream &os,Xbox &x);
    
private:
    bool conectadoXboxLive;
    bool kinectConectado;
};

#endif // XBOX_H

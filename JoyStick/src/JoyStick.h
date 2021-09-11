
class JoyStick{
    private:
        unsigned int xPin;
        unsigned int yPin;
        int value[2];

    public:
        JoyStick(unsigned int xPin,unsigned int yPin);

        int* GetValue();
        void ReadJoystick();
        void ReplacePins(unsigned int xPin,unsigned int yPin);

        
};
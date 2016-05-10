#define OUTPUT_PIN 8

void setup()
{
    pinMode(OUTPUT_PIN, OUTPUT);
}


void setHigh()
{
    //HIGH for 1.2us
    PORTB = B0000001;
    PORTB = B0000001;

    //LOW for 0.5us
    PORTB = B0000000;
}

void setLow()
{
    //HIGH for 1.3us
    PORTB = B0000001;
    PORTB = B0000001;

    //LOW for 2.0us
    PORTB = B0000000;
    PORTB = B0000000;
    PORTB = B0000000;
}

void loop()
{
    setHigh();
    setLow();
    setLow();
    setLow();
    setLow();
    setLow();
    setLow();
    setLow();
    setLow();
    setLow();
    setLow();
    setLow();
    setLow();
    setLow();
    setLow();
    setLow();
    setLow();
    setLow();
    setLow();
    setLow();
    setLow();
    setLow();
    setHigh();
    setHigh();
}

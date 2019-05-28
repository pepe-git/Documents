const int led1 = 4; 
const int led2 = 5;

void setup()
{
    pinMode(led1, OUTPUT);
    pinMode(led2, OUTPUT); 
}

void loop()
{
    digitalWrite(led1, HIGH);
    digitalWrite(led2, LOW);
    delay(1000);
    digitalWrite(led2, HIGH); 
    digitalWrite(led1, LOW);
    delay(1000);
}
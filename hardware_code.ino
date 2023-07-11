String inputs;
int relay1= 8;
int relay2= 10;
void setup()
{
Serial.begin(9600); //Set rate for communicating with phone
pinMode(relay1, OUTPUT); //Set relay1 as an output
pinMode(relay2, OUTPUT); //Set relay2 as an output
digitalWrite(relay1, LOW); //Switch relay1 off
digitalWrite(relay2, LOW); //Switch relay2 off
}
void loop()
{
while(Serial.available()) //Check if there are available bytes to read
{
delay(10); //Delay to make it stable
char c = Serial.read(); //Conduct a serial read
if (c == '#')
{
break; //Stop the loop once # is detected after a word
7
}
inputs += c; //Means inputs = inputs + c
}
if (inputs.length() >0)
{
Serial.println(inputs);
if(inputs == "turn light of")
{
digitalWrite(relay1, LOW);
}
else if(inputs == "turn light on")
{
digitalWrite(relay1, HIGH);
}
else if(inputs == "turn fan of")
{
digitalWrite(relay2, LOW);
}
else if(inputs == "turn fan on")
{
digitalWrite(relay2, HIGH);
}
inputs="";
}
}

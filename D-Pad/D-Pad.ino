/* Simple example for setting up a D-Pad using push buttons  */

const int upPin = 13;
const int rightPin = 12;
const int downPin = 11;
const int leftPin = 10;

int upButton;
int rightButton;
int downButton;
int leftButton;

void setup()
{
  Serial.begin(9600);
  pinMode(upPin, INPUT);
  pinMode(rightPin, INPUT);
  pinMode(downPin, INPUT);
  pinMode(leftPin, INPUT);
}

void loop()
{
  upButton = digitalRead(upPin);
  rightButton = digitalRead(rightPin);
  downButton = digitalRead(downPin);
  leftButton = digitalRead(leftPin);
  Serial.print("Up: ");
  Serial.print(upButton);
  Serial.print(", Right: ");
  Serial.print(rightButton);
  Serial.print(", Down: ");
  Serial.print(downButton);
  Serial.print(", Left: ");
  Serial.print(leftButton);
  Serial.println();
}

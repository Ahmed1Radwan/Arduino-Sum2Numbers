long num_1=0;
byte c;
long num_2=0;
int count=0;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Serial.setTimeout(10);
 
}
 
void loop() {
  // put your main code here, to run repeatedly:
if(Serial.available()>0)
{
if(count==1)
{
  num_2 = Serial.parseInt();
  c = Serial.read()-48;
  Serial.println(num_2);
  Serial.println(num_1+num_2);
}
else
{
  num_1 = Serial.parseInt();
  c=Serial.read()-48;
  Serial.println(num_1);
}
count=(count+1)%2;
}
 
}

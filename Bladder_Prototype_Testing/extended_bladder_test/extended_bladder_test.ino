/*
	This program is designed to monitor four (4) bladders for constant pressure.
	Four bladders will be attached to four pressure sensors and teh pressure sensors attached to 4 analong pins on the Arduino.
	Then all four bladders will be filled to the same pressure.
	The bladders will then be left alone, the Arduino will monitor their pressure.

	The purpose of this test is to see if any of the bladders can hold pressurized air for an extended period of time.
	The bladders are expected to remain filled for an extended time on the order of minutes, hours, or even longer.
	Monitoring the bladders with the Arduino makes this task more convenient and accurate. 
*/

// Define pins here
#define PS1 0
#define PS2 1
#define PS3 2
#define PS4 3

// Define calibration value here
#define calibration 1

// Define global variable start_time
unsigned short start_time;

void setup() {
  // set pinModes
  pinMode(PS1, INPUT);
  pinMode(PS2, INPUT);
  pinMode(PS3, INPUT);
  pinMode(PS4, INPUT);

  // start Serial
  Serial.begin(115200);

  // initialize start_time
  start_time = millis();
}

void loop() {
  // for each pressure sensor
  //  print: analog value | pressure (unit) \t
  // calculate the amount of time that has passed using the timePassed() function
  // ^ print all on the same line
}

// this function calculates the amount of time that has passed since start_time
// this function uses millis()
// millis uses a 32 bit unsigned long, therefore it counts up to 4294967296 milliseoncds or 1193.05 hours
// http://forum.arduino.cc/index.php?topic=43858.0
// INPUT -> none
// OUTPUT -> (float) hours
float timePassed() {
  // calculate the time that has passed in milliseconds
  // multiply that number by 2.77778e-7, the number of hours in 1 millisecond
  // return the calculated number of hours
}

# FlappyPaddleConversion
 "Flappy" PDK transmission conversion for VW


The Beginning of this project will start off with very rough code. (1/25/22).
I plan on making it progressively better as I continue working forward.

Servos are the controllers for the gears changes at the current moment. The use a contact-less style mechanism where they will only touch when shifting.  

Using a Stepper motor with start end-to-end switches (feedback loop), the clutch release can be computer controlled.

RPM information will be pinged off the negative side of the coil, and provides the nessary information to the clutch-release system. Engine RPM above idle, as well as a switch connected to the brake pedal, being open circuit, activates the system to slowly release the clutch.

Wheel speed sensor to be added in the future.

Designed around the Arduino Mega.

The entire system is built around a fail-safe manual take over. The entire car can be driven normally at any given time.

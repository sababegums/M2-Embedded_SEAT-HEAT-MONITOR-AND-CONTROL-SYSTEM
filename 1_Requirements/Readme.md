# Heat Control System
## Theory
The heat control system is basically used to control the temperature of a car seat. When a user or driver of the car gets seated on a car, the button sensor gets activated. After that, the user gets access to turn on the heater. The temperature sensor keeps monitoring the temperature and sends the analog value to the microcontroller. The microcontroller processes the analog input of the temperature sensor and outputs a temperature value through serial communication. All the activities of the control system are done on a microcontroller called Atmega328.
- In the places where snow falls or temperature is less,that is around zero degree centigrade, people feel comfort if the car seats are warm while travelling.
- In this project Microcontroller ATMega 328 is used to control seat temperature.
- Program is designed like Heater starts operation only if person is sitting on seat and heater switch is closed.
- When both above conditions are true Temperature sensor starts sensing tempraure of seat.
- If seat temperature is more than 25 deg centigrade,there will be no supply to heater because seat is warm enough.
- If temperature is less than 25 deg PWM output drives the heater driver circuit.
- PWM output and temperature values are inversely proportional i,e lesser the temperature more value of PWM signal will drive the heater.
- For different range of temperature values different PWM value signal is generated.
- When temperature rises above 25 deg,PWM signal will be 0(low).
- All this opeartion is automatic and also temperature range is transmitted to serial output.
## Simulation
The functionality of the heat control system is coded in embedded c and the working is demonstrated using simuation in a software called SimulIDE. Below shows two images where in the 1st image shows the status of the simulation when the system is ON and the second image shows the status of the system when it is OFF
## ON
![ezgif com-gif-maker (1)](https://user-images.githubusercontent.com/94221735/144048994-df05f206-2faf-4938-8f25-c9408d269504.gif)
## OFF
![Screenshot (45)](https://user-images.githubusercontent.com/94221735/144052026-a2a471fd-1edf-4e68-9775-a8bd643d3230.png)
## Functionality
- When the two switches are closed, the first LED glows indicating the actuation of the system and the heater.
- Next the analog input from the temperature sensor is received and digitized.
- The digitized temperature input is visualized using Pulse Width Modulation.
- The corresponding temperature values based on the digitized temperature input is transmitted by the UART protocol. Here the data is displayed on the serial monitor.
## Badges
![Github Badge](https://img.shields.io/badge/Code%20grade-B-brightgreen)
![badges](https://img.shields.io/badge/built-passing-brightgreen)
![codecheck](https://img.shields.io/badge/Code%20Quality%20Score-80-brightgreen)

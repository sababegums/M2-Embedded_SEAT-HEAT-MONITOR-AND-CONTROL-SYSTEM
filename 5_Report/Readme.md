# Heat Control System

## Theory

The heat control system is basically used to control the temperature of a car seat. When a user or driver of the car gets seated on a car, the button sensor gets activated. After that, the user gets access to turn on the heater. The temperature sensor keeps monitoring the temperature and sends the analog value to the microcontroller. The microcontroller processes the analog input of the temperature sensor and outputs a temperature value through serial communication. All the activities of the control system are done on a microcontroller called Atmega328.
- In the places where snow falls or temperature is less,that is around zero degree centigrade, people feel comfort if the car seats are warm while travelling.
- In this project Microcontroller ATMega 328 is used to control seat temperature.
- Program is designed like Heater starts operation only if person is sitting on seat and heater switch is closed.
- When both above conditions are true Temperature sensor starts sensing tempraure of seat.
- If seat temperature is more than 25 deg centigrade,there will be no supply to heater because seat is warm enough.
-  If temperature is less than 25 deg PWM output drives the heater driver circuit.
- PWM output and temperature values are inversely proportional i,e lesser the temperature more value of PWM signal will drive the heater.
- For different range of temperature values different PWM value signal is generated.
- When temperature rises above 25 deg,PWM signal will be 0(low).
- All this opeartion is automatic and also temperature range is transmitted to serial output.

## SWOT ANALYSIS

### STRENGTHS 
- Seats with individual heating systems.
- The temperature range can easily be changed.
- Easy to use.
 
### WEAKNESS
Usually recommended for countries with extreme cold temperatures
During this process, the engine needs to be on.
 
### THREATS
The seat can't be turned on before there is someone sitting on it.

## Structural Diagram

![image](https://user-images.githubusercontent.com/89759853/133655306-ab257b88-8b8b-44ab-97f3-55b3f39e0ba9.png)

## Simulation

## Activity-1 In Action

|OFF|OFF|OFF|ON|
|:--:|:--:|:--:|:--:|
|![OFF](https://user-images.githubusercontent.com/80662569/116460814-1e747f00-a885-11eb-9361-7d70ba90e82d.PNG) |![OFF](https://user-images.githubusercontent.com/80662569/116460808-1c122500-a885-11eb-8023-4ab0ec876fa6.PNG)|![OFF](https://user-images.githubusercontent.com/80662569/116460810-1ddbe880-a885-11eb-9460-5a43f89de00e.PNG)|![ON](https://user-images.githubusercontent.com/80662569/116460813-1ddbe880-a885-11eb-90f1-d0da5705cd19.PNG)|

## Activity-2 In Action

|ADC_00|ADC_11|
|:--:|:--:|
|![ADC_00](https://user-images.githubusercontent.com/80662569/116461383-d0ac4680-a885-11eb-84b5-dc8d17cff3dc.PNG) |![ADC_11](https://user-images.githubusercontent.com/80662569/116461375-cdb15600-a885-11eb-805c-2dc73d198a3d.PNG)|

## Activity-3 In Action

|PWM_20%|PWM_40%|
|:--:|:--:|
|![PWM_20%](https://user-images.githubusercontent.com/80662569/116461901-72cc2e80-a886-11eb-8525-42061d74f693.PNG) |![PWM_40%](https://user-images.githubusercontent.com/80662569/116461893-7069d480-a886-11eb-859b-1ec11c368164.PNG)|
|PWM_70%|PWM_95%|
|![PWM_70%](https://user-images.githubusercontent.com/80662569/116461897-72339800-a886-11eb-9006-369b7be40d44.PNG)|![PWM_95%](https://user-images.githubusercontent.com/80662569/116461900-72339800-a886-11eb-8eea-43aeae327bea.PNG)|

## Activity-4 In Action

|20 DEGREES|25 DEGREES|
|:--:|:--:|
|![20](https://user-images.githubusercontent.com/80662569/116462498-20d7d880-a887-11eb-827d-3c4601f65f82.PNG) |![25](https://user-images.githubusercontent.com/80662569/116462506-22a19c00-a887-11eb-9f96-e03d69035c7e.PNG)|
|29 DEGREES|33 DEGREES|
|![29](https://user-images.githubusercontent.com/80662569/116462509-233a3280-a887-11eb-9b8f-c925bc36cdcd.PNG)|![33](https://user-images.githubusercontent.com/80662569/116462511-233a3280-a887-11eb-91a9-a11098dc7529.PNG)|


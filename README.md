# team-saviours

Idea Details

Problem Statement: Power / Water consumption in the offices, 
                                    Schools, hostels and facilities



WATER MONITORING AND LEAKAGE DETECTION SYSTEM



OUR IDEA

To monitor use of water and show the usage of water using android application and also the system detects if any leakage in the pipes and gives an alert through an automatically generated mail.

COMPONENTS REQUIRED 

1. Arduino Micro Controller
2. Potentiometer
3. Ultrasonic sensor HC SR04
4. Wifi Module ESP8266

ARRANGEMENT /SETUP
1. Ultrasonic sensor/transducer is placed on the upper part of water tank as shown in figure.
2. Potentiometer is kept inside the tap such that axle of tap and potentiometer is same and potentiometer changes its value with rotating tap.


HARDWARE WORKING
 	Ultrasonic sensor which is placed inside the water tank gives the height of water and from this height we are going to find volume of water in the tank.

 	When all taps are “OFF” then potentiometer reading is also “ZERO” and when it is “ON” then potentiometer reading is “NON ZERO” value.




 	From here 2 cases arises –
•	One if tap is closed (potentiometer reading “0”) and if    volume of water is changed then it means that “WATER IS LEAKING”
•	Another if tap is closed (potentiometer reading “0”) and if volume of water is not changed then it means that “WATER IS NOT LEAKING”.


TECHNOLOGY STACK & THEIR ROLES
1. Processing & Python –
   When there is any leakage then automatically an email is sent to the respected user .This is done by Processing and python.
2. Database and Analytics –
    The consumption of water is recorded and a database is created using Thing speak open source platform. We can use this database to plot graphs i.e. analytics.
3. Android application-
  The database created is shown on an android application .So that user can access and take necessary step to reduce misuse of water.



USE CASE


 
POWER MONITORING AND POWER WASTAGE DETECTION SYSTEM 

OUR IDEA
To monitor the usage of electricity in a building (office, Hospital) and show this usage by android application and also the system detects the wastage of electricity and gives an alert through an automatically generated mail.

COMPONENTS REQUIRED
1. Arduino Micro Controller
2. Infrared sensor HC SR04
3. Wifi Module ESP8266

ARRANGEMENT /SETUP

1.	 2 infrared Sensors are placed, first at the entrance of building and other at the exit of building.
2.	Arduino and wifi module is connected with single phase electronic energy meter.
WORKING
1.	All the electronic energy meters of a building are connected with arduino and wifi module. So , reading of meter is extracted and given to arduino and then with the help of wifi module ,readings are send on server.

2.	Infrared sensor which is placed at entrance act like an up counter, it counts the number of people entering the building. 
3.	Other infrared sensor which is placed at the exit act like a down counter when people leave from building.
4.	From here 2 cases arises –
A. when counter reading is “ZERO” (means no one is present in building) and if there is any change in reading of meter then it shows that there is some wastage of electricity going on.

B. when counter reading is “ZERO” (means no one is present in building) and if there is NO change in reading of meter then it shows that there is NO wastage of electricity going on.

TECHNOLOGY STACK & THEIR ROLES
1. Processing & Python –
   When there is any wastage of electricity   then automatically an email is sent to the respected authority .This is done by Processing and python.
2. Database and Analytics –
    The consumption of electricity is recorded and a database is created using Thing speak open source platform. We can use this database to plot graphs i.e. analytics.
3. Android application-
  The database created is shown on an android application .So that user can access and take necessary step to reduce misuse of electricity.

USE CASE







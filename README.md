# Voice-Controlled-Home-Automation-System
 Home automation system for the physically challenged people unable to walk, to control the various home appliances with any other person’s help.

 ## Objective

Individuals who are paralysed waist-down are unable to do simple activities like turning on various appliances. We aim to help them by developing a home- automation system using a mobile app that can turn on/off the light, fan, and night lamp via bluetooth.

# About the Project
Nowadays, we have remote controls for our television sets and other electronic systems, which have made our lives real easy. Have you ever wondered about home automation which would give the facility of controlling tube lights, fans and other electrical appliances at home using a remote control? Off-course, Yes! But, are the available options cost-effective? We have come up with a new system called Arduino based home automation using Bluetooth. This system is super-cost effective and can give the user the ability to control any electronic device without even spending for a remote control. This project helps the user to control all the electronic devices using his/her smartphone. Time is a very valuable thing. Everybody wants to save time as much as they can. New technologies are being introduced to save our time. To save people’s time we are introducing a Home Automation system using Bluetooth . With the help of this system we can control your home appliances from your mobile phone. We can turn on/off your home appliances within the range of Bluetooth.

# Components required

● Arduino UNO – 1
● HC – 05 Bluetooth Module – 1
● Mobile Phone – 1
● 5V Relay – 4
● 1 KΩ Resistor – 4
● Power Supply
● Connecting Wires
● Breadboard
● “BT voice control for Arduino” app


# Working

![flow_Diag](https://github.com/khyati-o4/Voice-Controlled-Home-Automation-System/assets/77969213/902229ea-2b85-4d3d-b2b7-defc63d0afa1)

In this project, a simple Voice Activated Home Automation system is designed. Voice commandsare used to control different appliances. We will be using an app named as BT voice control for arduino .After making the necessary connections, we have to switch on the power supply to the circuit. Now, we need to pair the Phone’s Bluetooth to the HC – 05 Bluetooth Module. After the device is connected, by using the app we will start giving the voice commands. The command will also be displayed on the phone screen and later on the app will recognise the command and transfer it to the bluetooth module. When the string “turn on light” is detected by the app, it will send the string as “*turn on light#”. So, the actual message received by the Bluetooth Module is in the format of “*Message#”. The reason for padding the ‘*’ and ‘#’ at the beginning and end of the string is to identify the starting and ending of the message. The received message is compared with some predefined strings and if the message matches with any of them, then corresponding action like turning on or turning off the load happens. We have used the following commands: “turn on AC”, “turn off AC”, “turn on light”, “turn off light”, “turn on night lamp”, “turn off night lamp”, “turn on fan”, “turn off fan”, “turn on all” and “turn off all”

# Software Implementation

![online simulation](https://github.com/khyati-o4/Voice-Controlled-Home-Automation-System/assets/77969213/93f7b6a2-c23d-43ec-ac0c-4bc1c7a42fe1)


# Results and Discussion

Software Demonstartion

Voice command for turning the light off!
![voice command light off](https://github.com/khyati-o4/Voice-Controlled-Home-Automation-System/assets/77969213/dcae63a3-b0c8-4211-85cb-4382486862a1)

Voice command for turning the light on!
![voice command light on](https://github.com/khyati-o4/Voice-Controlled-Home-Automation-System/assets/77969213/7096ce57-96ce-44a1-b8bf-1d2345c49f47)

Hardware circuit demonstration
![hardware Result](https://github.com/khyati-o4/Voice-Controlled-Home-Automation-System/assets/77969213/d4790f87-65ac-4137-973d-bc8f164b0db9)


# Conclusion

This project provided the design and architecture for a novel Virtual Eye for the Blind based on Arduino that can identify objects and obstacles in front of users and provide warning signs in the form of audio messages and vibrations. An electronic guidance system that is straightforward, affordable, effective, portable, adjustable, and user-friendly is suggested in order to give the blind and visually impaired with helpful aid and support. The system's ability to pinpoint the origin and distance of potential hazards for the blind makes it unique and effective. It has the ability to detect and scan for obstacles. The blind will be able to go from one area to another if the planned architecture is designed correctly.


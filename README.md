# AI-based-Autonomous-Assistant-Robot

While robotic machines are used in the industry in massive numbers, these machines are dumb and can do little more than a tiny set of pre-programmed tasks. There is a fresh wave of AI development in the industry, but it has mostly stuck to software only. We plan to finally bridge the gap between AI and the real hardware world. The AI bot will be physical robot which can move around, interact lively with people and do real world tasks, and wont be limited to the small screens of your phone app.


System Overview
Flow Chart of various sub-systems.
 


 ![flowchartcrop](https://github.com/PavanJ-16/AI-based-Autonomous-Assistant-Robot/assets/121051410/5742afe0-9963-4266-b159-5016dffd3b14)





Design Aspects
Primary Computing platform : Raspberry Pi
We’ll be using a Raspberry Pi Model 4B as out primary computing system. It will be responsible for processing all the inputs, data, processing, interaction with cloud/APIs and coordination of various subsystems.
Text-Speech interchange
Python based text-speech interchange tools are used to enable the bot to not only listen but also speak with users through voice.

IoT Cloud
Arduino IoT cloud, as well as onboard Wifi-Bluetooth will be used to seamless interact and control other IoT enabled smart devices. The Bot would be able to turn on/off, users’ devices situated across the globe though IoT.
AI assistants - Large Language Models
Through API connection with customized versions of AI-LLMs like Gemini/GPT, the bot will be able to unleash its full potential as AI assistant by answering questions as well as executing tasks based on commands.
Camera & OpenCV-Computer Vision
The Bot will be equipped with cameras on a rotating Robot head. It will be able to identify and track people, object, and gestures to respond to user inputs and environmental stimuli, as well as hazard avoidance. Further the bot can use the Camera to send photos to Gemini/ChatGPT to deal with image based questions.
Face Screen & Main Display
The bot will have a small display which will allow the bot to express itself in the form of facial expressions. A large display will allow it to display required information/output
Sensor Suite
The Bot will be aided in environmental stimuli by a suite of sensors like Sonar Sensors, range finders, microphones, etc.
Micro Controllers : Arduino / ESP family
Arduino/ESP microcontrollers will act as an interface between main computer Raspberry Pi, and sensors/actuators. They will control the rotation of the robotic head, movement of robot, as will as collect sensory data to be sent to the Raspberry Pi.


Tools, Tech Stacks & Components.
Most of the code will be Python & Arduino
Software:
OpenCV
Arduino IoT cloud
Gemini/GPT/MistralAI APIs
Python text to speech & speech to text tools
Serial & Bluetooth Communication packages
Hardware:
Raspberry Pi
Arduino UNO/Nano
ESP 32/ ESP8266
Optical Cameras
Microphones
Sonar Sensors
Displays
Motors and Chassis


Applications
The versatility of the AI-based robotic assistant enables its deployment across numerous industries and domains. Potential applications include warehouse automation, eldercare assistance, household, and educational support. From assisting in houses to providing support in medical facilities, the robot can augment human capabilities and streamline operations in diverse environments, with better quality of life. Using Modular design, the robot will be able to be upgraded effortlessly changing form as per changing requirements. The Software can always be customized and upgraded too to better suit the needs to the everchanging future.

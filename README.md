# ECE 484 Final Individual Project - Pinball Scoring System

## The following are needed in order to perform this project
1. 1 Touch Sensor
2. 2 Ultrasonic Sensors
3. 1 Arduino
4. 1 LCD Display
5. Either 1 I2C Serial LCD Module or 1 Potentiometer 
6. Aluminum Foil Tape/Conductive Tape
7. The Arduino IDE which can be installed [here](https://www.arduino.cc/en/software)
8. Git which can be installed [here](https://git-scm.com/downloads)

## Note: For this project I used an LCD with an I2C LCD Module not a potentiometer. You will need more pins to use an LCD with a potentiometer.

# About the Scoring
This scoring mechanism is designed for my final group project in my course ECE 484, embedded systems. The scoring mechanism provided here is made to give the player using the flippers a chance to score points throughout a pinball game, however it is very high stakes... There are four elements that make up this system. First being the LCD as that displays the players score and it will increment with every instance of scoring points. Second being the touch sensor as every time the pinball will touch the sensor it will give the player a point. Third being the goal ultrasonic sensor, this sensor is intended to be blocked by player 2 in our pinball game and increments when the ball passes by it. Finally the last element is the last ultrasonic sensor, positioned behind the flippers, this sensor will end the game if the ball passes through it bringing a high stakes element to this pinball game. 

*To find a low level overview of the scoring system along with schematics visit my [wiki](https://github.com/MOconnorUS/ece484_final_individual_project/wiki/Scoring-System)*
---

# After completed everything above, the following will allow you to access and run the project
Now that the installations are all complete and you have your components. All that is left for you to do is clone the repository!

# How to clone the repository
1. Open Command prompt type `cmd` into the search bar on your windows device
2. Navigate to your the folder you wish to clone the repository in this can be done by typing `cd file_path_to_directory`
3. Click on the green code button on the repository shown in the image below  
![Green Code Button](/assets/images/code_button.PNG "Green Code Button")
4. Copy the github link provided in the drop down by clicking the button circled in the image below  
![Copy Clone URL](/assets/images/copy_clone.PNG "Copy Clone URL")
5. Type: git clone github_link *github_link is the url provided by github which can be pasted by right clicking on the command prompt*

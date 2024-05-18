# ECE 484 Final Individual Project - Pinball Scoring System

# Special Note #
Before getting started it should be mentioned that there are two different scoring systems. One for single player pinball games solely displaying your score while playing and after the game is over. Second is specifically designed for the two player pinball game my group and I designed for our ECE 484 Final Project. The score for the second version functions as follows. Player 1 will score based on touch sensors hit as well as crossing a path being sensed by an ultrasonic sensor. Player 2 will start off with a maximum amount of points, which will also be the ceiling of player 1's score, and the score will decrese as time goes on in the game since they are playing defense. Once player two is able to get the ball past player 1's flippers and the game ends, their score will be calculated based on maximum score - (time taken in minutes and seconds * loss per second). Throughout this README and the wiki I will include everything needed to complete both versions.

# Getting Started
## The following are needed in order to perform this project for the single player mode
1. One Touch Sensor
2. Two Ultrasonic Sensors
3. 1 Arduino
4. 1 LCD Display
5. The Arduino IDE which can be installed [here](https://www.arduino.cc/en/software)
6. Git which can be installed [here](https://git-scm.com/downloads)

## The following are needed in order to perform this project for the two player mode
1. One Touch Sensor
2. Two Ultrasonic Sensors
3. 2 Arduinos
4. 2 LCD Displays
5. 1 Push Button
6. The Arduino IDE which can be installed [here](https://www.arduino.cc/en/software)
7. Git which can be installed [here](https://git-scm.com/downloads)

### Notes


### WILL FILL OUT MORE CONTENTS FOR FINAL VERSION & WIKI WILL BE STRUCTURED WITH PROJECT DESIGN

---

# After completed everything above, the following will allow you to access and run the project
Now that the installations are all complete and your pinball machine is assembled. All that is left for you to do is clone the repository!

# How to clone the repository
1. Open Command prompt type `cmd` into the search bar on your windows device
2. Navigate to your the folder you wish to clone the repository in this can be done by typing `cd file_path_to_directory`
3. Click on the green code button on the repository shown in the image below  
![Green Code Button](/assets/images/code_button.PNG "Green Code Button")
4. Copy the github link provided in the drop down by clicking the button circled in the image below  
![Copy Clone URL](/assets/images/copy_clone.PNG "Copy Clone URL")
5. Type: git clone github_link *github_link is the url provided by github which can be pasted by right clicking on the command prompt*

-----------------------------------------------------Project Overview---------------------------------------------------------------------------

The goal of this project is to have a green robot navigate a maze.  
Maze is developed so that it is a lot more complicated.
The black robts are scattered throughout the mze and it will obstruct the path of the green robot.
Once the green robot runs into the black robot, it'll shoot the green robot to destroy it.

----------------------------------------------Description of key challenges:--------------------------------------------------------------------

I ran into three main challenges while working on this project.

First, the docker container for enviro throws an error: Error response from daemon: driver failed programming external connectivity on endpoint dazzling_northcutt (5314e427ff67156556162d17d54a01b61b1dbf7e071887b563ce04b65c1c0191): Bind for 0.0.0.0:8765 failed: port is already allocated.".
This error rarely occurs but when this error does occur, the visual studio code will freeze up and it sometimes crashes the docker container.  When this happened first few times, I tried to terminate it using cntr + C several times and terminating it this way will permanently break your docker container.  Once the docker container breaks, the user will have to reinstall the docker several time before the problem fixes itself.  The safe way to fix this error is to restart your computer instead of forcibly terminating the docker.

Second problem I had was my insufficient experience using github repository.  I had accidentally erased and overwrote my final project files while attempting to modify and change the files in the github repository which set me back quite a bit.  

The last problem I had was getting the program to work the way I want it to.  The goal of this project is to get the green robot to navigate the maze.  I had a difficult time accomplishing this task.  The robot was able to move in a straight line and using the sensor, it is able to make a turn.  However, After it makes turns, it'll get stuck at a edge of the maze or it'll turn back to the way it came from and move backward.  I tried to resolve this issue by implementing 2 other sensor on the robot and using a control system to move around.  However, the robot wasn't able to navigate properly throughout the maze.

------------------------------------------------------------Installation------------------------------------------------------------------------
Software needed: Visual studio code and Docker
Docker must be installed on the computer.  Docker can be installed from:  https://docs.docker.com/get-docker/
Visual studio code can be installed from: https://code.visualstudio.com/download

Run the following command to install the docker container with preloaded enviro:

docker run -p80:80 -p8765:8765 -v $PWD:/source -it klavins/enviro:alpha bash


------------------------------------------------------------How to run the project--------------------------------------------------------
In order to start docker container with Enviro, run the following command:

docker run -p80:80 -p8765:8765 -v $PWD:/source -it klavins/enviro:alpha bash

To launch the project, type esm start

Once the above steps has been executed, then open the browser and type local host in the browser address.

Compile the project by running the code Make.  

Type Enviro to run the project.

-----------------------------------------------------------Acknowledgement----------------------------------------------------------------------
The enviro program was obtained and used from Dr. Klavins EEP520 class git repository: https://github.com/klavins/EEP520-W20

The following class example codes were also used: https://github.com/klavins/EEP520-W20/tree/master/week_8/my_project/defs

In addition, our class has been learning to program in a C/C++ environment using visual studio code and a docker container.

Special thanks to Dr. Klavins, Victor, and Rajendra for teaching us programming and guiding us throughout the class
#ifndef __MY_ROBOT_AGENT__H
#define __MY_ROBOT_AGENT__H 

#include "enviro.h"

using namespace enviro;

class MyRobotController : public Process, public AgentInterface {

    public:
    MyRobotController() : Process(), AgentInterface() {}

    void init() {}
    void start() {}
    void update() {

        //moves the robot in a straight line
        track_velocity(4,0);
        
        //collects sensor value
        double v = sensor_value(0);

        //depending on the obtained sensor value, the robot will turn
        if (v < 30)
        {
            track_velocity(0,3);
        }
        std::cout<< "sensor 1 " << v <<'\n';
    }
    void stop() {}

};

class MyRobot : public Agent {
    public:
    MyRobot(json spec, World& world) : Agent(spec, world) {
        add_process(c);
    }
    private:
    MyRobotController c;
};

DECLARE_INTERFACE(MyRobot)

#endif
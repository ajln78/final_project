#ifndef __INTRUDERS_AGENT__H
#define __INTRUDERS_AGENT__H 

#include "enviro.h"

using namespace enviro;

class intrudersController : public Process, public AgentInterface {

    public:
    intrudersController() : Process(), AgentInterface() {}

    void init() {}
    void start() {}
    void update() {
        //track_velocity moves the black robots in a straight line
        track_velocity(4,0);

        //collects the value obtained from the sensor
        double v = sensor_value(0);

        //based on the sensor value, the robot will turn to navigate the maze
        if (v < 30)
        {
            track_velocity(0,4);
        }
    }
    void stop() {}

};

class intruders : public Agent {
    public:
    intruders(json spec, World& world) : Agent(spec, world) {
        add_process(c);
    }
    private:
    intrudersController c;
};

DECLARE_INTERFACE(intruders)

#endif
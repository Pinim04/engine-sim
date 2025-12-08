#include "../include/engine_sim_application.h"

// #include <iostream>

int main()
{
    EngineSimApplication application;
    application.initialize();
    application.run();
    application.destroy();

    return 0;
}

//
// Created by asiia on 07.03.2021.
//

#include "../AllAboutUsers/Director.h"
#include "Room.h"
#include "../AccessLevel.h"

#ifndef ASSIGNMENT2_CABINET_H
#define ASSIGNMENT2_CABINET_H

class Cabinet: public Room{
public:

    Cabinet(int numberOfSits, bool haveConditioner, int floor);
    static std::vector<Cabinet*> ListOfCabinets;
    const :: TypeOfTheRoom type=CABINET;
    ::AccessLevel access=YELLOW;
    bool HaveConditioner;
    //void PrintTheRoom() override;
};


#endif //ASSIGNMENT2_CABINET_H

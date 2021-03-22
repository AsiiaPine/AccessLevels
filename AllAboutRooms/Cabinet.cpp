//
// Created by asiia on 07.03.2021.
//

#include <iostream>
#include "../AccessLevel.h"
#include "Room.h"
#include "Cabinet.h"
std::vector<Cabinet*> Cabinet::ListOfCabinets;
Cabinet::Cabinet(int numberOfSits, bool haveConditioner,int floor) : Room(
        numberOfSits, RED, floor, CABINET), HaveConditioner(haveConditioner),type(CABINET) {ListOfCabinets.push_back(this);}

/*void Cabinet::PrintTheRoom() {
    std::cout<<Cabinet::type<<" number "<<this->number<<"\n Number of sits: "<< this->NumberOfSits<<"\n Access Level: "<< this->AccessLevel<<endl;
}*/

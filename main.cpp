using namespace std;

#include <iostream>
#include <string>
#include <fstream>
#include <iterator>
#include "AllAboutUsers/Users.h"
#include "AllAboutUsers/Director.h"
#include "AllAboutUsers/LabEmpoyee.h"
#include "AllAboutUsers/Students.h"
#include "AllAboutUsers/Professors.h"
#include "AllAboutUsers/Admin.h"
#include "AllAboutUsers/Guest.h"
#include "AllAboutRooms/Room.h"
#include "AllAboutRooms/Cabinet.h"
#include "AllAboutRooms/ClassRoom.h"
#include "AllAboutRooms/DirectorCab.h"
#include "AllAboutRooms/LectureRoom.h"
#include "AllAboutRooms/Lab.h"
#include "AllAboutRooms/ConferenceRoom.h"


int main() {

    //make some Cabinets for professors
    Cabinet *SucciCab= new Cabinet   (2, false, 5);
    Cabinet *ShilovCab= new Cabinet   (4, false, 5);
    Cabinet * KhonukhovCab= new Cabinet  (10, true, 5);
    Cabinet *KhanCab= new Cabinet  (1, false, 5);
    Cabinet *ZuevCab= new Cabinet (10, true, 5);

    //Create Director and his Cabinet, sure Director's Cabinet is better than Succi's one!

    DirectorCab* directorCab = new DirectorCab(4, false, 5);
    Director director("Kirill", "Semenikhin", directorCab, latte);

    //Make 2 gorgeous admins for helping
    Admin admin1("Rami", "Malek", true, true, 500);
    Admin admin2("Keanu", "Reeves", false, true, 10500);

    //Invite professors to their cabinets and separate them by laboratoties
    Professors Succi("Succi", "Diancarlo",
                     The_lab_of_Industrializing_Software_Production_LIPS,
                     (Cabinet *) Cabinet::ListOfCabinets.at(0));
    Professors Shilov("Shilov", "Nikolay",
                      Lab_of_Software_and_Service_Engineering,
                      (Cabinet *) (Cabinet::ListOfCabinets.at(1)));
    Professors Khonukhov("Ivan", "Khonukhov",
                         Lab_of_Data_Analysis_and_Machine_Learning_in_the_oil_and_gas_industry,
                         (Cabinet *) (Cabinet::ListOfCabinets.at(2)));
    Professors Khan("Adil", "Khan",
                    Lab_of_Machine_Learning_and_Knowledge_Representation,
                    (Cabinet *) (Cabinet::ListOfCabinets.at(3)));
    Professors Zuev("Zuev", "Eugene",
                    Lab_of_Operating_Systems_programming_languages_and_compilers,
                    (Cabinet *) (Cabinet::ListOfCabinets.at(4)));

    //Make Employees for professors' labs, 2 of them were called by Director, they ACCESS Level is RED
    // (So, they can come to Director Cabinet)
    LabEmployee Luda("Luda", "Star",
                     Lab_of_Machine_Learning_and_Knowledge_Representation,
                     false, 2020);
    LabEmployee Motya("Motya", "Zaycev",
                      Lab_of_Machine_Learning_and_Knowledge_Representation,
                      false, 2015);
    LabEmployee Kolya("Kolya", "Buldog",
                      Lab_of_Data_Analysis_and_bioinformatics,
                      false, 2014);
    LabEmployee Tanya("Tanya", "Zulberg",
                      Lab_of_Data_Analysis_and_Machine_Learning_in_the_oil_and_gas_industry,
                      false, 2021);
    LabEmployee Stepan("Stepan", "Ivanov",
                       Lab_of_Software_and_Service_Engineering,
                       false, 2020);
    LabEmployee Oscar("Oscar", "Wild",
                      Lab_of_Intelligent_Robotics_Systems, false, 2021);
    LabEmployee Elizah("Elizah", "Rift",
                       Lab_of_Operating_Systems_programming_languages_and_compilers,
                       true, 2021);
    LabEmployee Will("Will", "Black",
                     Lab_of_Operating_Systems_programming_languages_and_compilers,
                     true, 2020);

    //Create 16 Students
    Students Arkadiy("Arkadiy", "Arkadiev", 5, 10000, Grant_WithScholarship);
    Students Maria("Maria", "Marianovna", 4, 9000, Grant_WithScholarship);
    Students Jane("Jane", "Janovna", 0, 0, Grant_WithoutScholarship);
    Students Anton("Anton", "Antonov", 50, 0, Grant_Partial50Percent);
    Students Can("Can", "Fick", 4.5, 9500, Grant_WithScholarship);
    Students Barbie("Barbie", "Que", 4.3, 8000, Grant_WithScholarship);
    Students Meta("Meta", "Analys", 0.1, 1000, Grant_WithScholarship);
    Students Sasha("Sasha", "Belyi", 10, 12000, Grant_WithScholarship);
    Students Petr("Petr", "Perviy", 31, 0, Grant_Partial70Percent);
    Students Stul("Stul", "Slonam", 4.4, 90000, Grant_WithScholarship);
    Students Slow("Slow", "Man", 4.5, 5000, Grant_WithScholarship);
    Students Belaya("Belaya", "Vorona", 4.6, 6000, Grant_WithScholarship);
    Students Temnaya("Temnaya", "Loshadka", 13, 0, Grant_Partial70Percent);
    Students Gadkiy("Gadkiy ", "Utenock", 13, 0, Grant_Partial50Percent);
    Students Ivan("Ivan", "Mikhailov", 14, 0, Grant_WithoutScholarship);
    Students Sydor("Sydor", "Petrov", 61, 0, Grant_WithoutScholarship);
    Students Pushka("Pushka", "Alexandrov", 100, 36000, Grant_WithScholarship);
    Students Genadiy("Genadiy", "Martirosyan", 99, 300, Grant_WithScholarship);


    //Arkadiy tries to open cabinet of Pr. Zuev to change his grades,but have no access.
    Arkadiy.TryToEnter(ZuevCab);
    //Then he ask admin for help
    admin1.ChangeAccessLevelOfUser(Arkadiy, RED);
    //Arkadiy enters the room of the professor
    Arkadiy.TryToEnter(ZuevCab);
    //But Arkadiy did not find any grade lists, so he wants to try to open the Director Cab and change his grades.
    Arkadiy.TryToEnter(directorCab);
    //And success! He did it! But he hears bored steps outside the door and hiding in the cabinet
    //Since door was opened, pr. Succi had looked inside to check is the cabinet so good as his one, saw and began to laugh "YEEESS!"
    // but director Semenikhin has came. He saw the Professor and change their cabinets.
    int a = directorCab->number;
    directorCab->number = SucciCab->number;
    SucciCab->number = a;
    directorCab->IsItBetterThanSucciCabinet = true;
    //The end


    //Just checking up university's Emergency system:
    Anton.ResetTheListOfAR();//Reset the List of available rooms for Anton
    Anton.WhatRoomICanEnter(); // Print all rooms
    Anton.TryToEnter(KhanCab);//
    ZuevCab->Emergency();//Emergency in Pr. Zuev cabinet immediately opens all rooms for every user
    Anton.TryToEnter(KhanCab);
    Anton.WhatRoomICanEnter();

    admin1.StopEmergency();

//How to work with BLUE access lvl at the first floor:

    //Create Lecture and Conference Rooms at the first floor
    LectureRoom *LR7=new LectureRoom(100, true, true, 1);
    ConferenceRoom *CR8=new ConferenceRoom(20, true, false, 1);

    //Create Lecture and conference Rooms at non-first floor
    LectureRoom *LR9=new LectureRoom(100, true, true, 2);
    ConferenceRoom *CR10=new ConferenceRoom(20, true, false, 2);



    //Let's invite a schoolboy and a schoolgirl to the university for the Olympiad
    Guest *Sashenka=new Guest("Frolova","Sasha");
    Guest *Kolenka= new Guest("Frolov", "Kolya");

    Sashenka->TryToEnter(LR7);
    //Sasha can enter the Lecture room because every Lecture and Conference room at the first floor has BLUE access lvl.
    LectureRoom *LR11=new LectureRoom(100, true, true, 1);
    //But she can't enter the director office at least because it is on the 5th floor
    admin1.AbleRoomForUser(*Sashenka, directorCab);
    Sashenka->TryToEnter(directorCab);//Ups, lovely Rami helps the little girl. Somebody is waiting for dismissal.
    Sashenka->WhatRoomICanEnter();

}//SetUP Work, What is inside, functions, (check chat pss2)
#include <iostream>
#include <string>
#include<vector>

#include "headers/team.h"
#include "headers/driver.h"
#include "headers/circuit.h"
#include"headers/retired_driver.h"
#include "headers/curent_driver.h"
#include "headers/commentator.h"
#include "headers/tires.h"
#include "headers/tireBuilder.h"
#include "headers/InterTireBuilder.h"
#include "headers/WetTireBuilder.h"
#include "headers/TireMaker.h"
#include "headers/TricouSchumacher.h"
#include "headers/tricou.h"
#include "headers/TricouSenna.h"
#include "headers/CreatorTricou.h"
#include "headers/CreatorTricouSchumacher.h"
#include "headers/CreatorTricouSenna.h"


int main() {
    Team RedBull("RedBull", "Milton Keynes", "Honda RBPT", "Christian Horner", 1997, 6, 115);
    Team Ferrari("Scuderia Ferrari", "Maranello", "Ferrari", "Frederic Vasseur", 1950, 16, 244);
    Team Mercedes("Mercedes-AMG PETRONAS", "Brackley", "Mercedes", "Toto Wolff", 1970, 8, 116);
    Team Aston("Aston Martin Aramco", "Silverstone", "Mercedes", "Mike Krack", 2018, 0, 1);
    std::cout << "Numar victorii Redbull:" << RedBull.getTeamWins() << std::endl;
    std::cout << "Mercedes are baza localizata in:" << Mercedes.getTeamBase() << std::endl;
    Team Haas;
    Haas.operator=(Ferrari);
    std::cout << Haas;


    Circuit Spa("Circuit de Spa-Francorchamps", "Belgia", 19);
    Spa.newCorner();
    std::cout << Spa;

    RetiredDriver retiredDriver("Michael Schumacher", "Ferrari", 91, 155, 7, 2012);
    Driver *ptrDriver = &retiredDriver;

    ptrDriver->stats();

//    auto *ptrCurrentDriver = new CurrentDriver("Lewis Hamilton", "Mercedes", 103, 150, 7, 200);
//
//    ptrCurrentDriver->stats();
//
//    delete ptrCurrentDriver;

    CurrentDriver *currentDriver = new CurrentDriver("Lewis Hamilton", "Mercedes", 103, 170, 7, 300);

    std::vector<Driver *> drivers;
    drivers.push_back(currentDriver);

    for (Driver *driver: drivers) {
        if (CurrentDriver *cd = dynamic_cast<CurrentDriver *>(driver)) {
            std::cout << "CurrentDriver stats:\n";
            cd->stats();
        } else {
            std::cout << "Not CurrentDriver.\n";
        }
    }

    for (Driver *driver: drivers) {
        delete driver;
    }
    std::cout<<"\n";

    Commentator<std::string> commentator1("David Croft", 20, "BBC");
    commentator1.changeChannel("SkySports");

    Commentator<std::string> commentator2("Martin Brundle", 27, "SkySports");
    commentator1.display();
    commentator2.display();
    std::cout << "\n";


    InterTireBuilder interBuilder;
    WetTireBuilder wetBuilder;
    TireMaker maker;

    maker.construct(interBuilder);
    Tire interTire = interBuilder.getResult();

    std::cout << "Detalii Inter:" << std::endl;
    interTire.displayInfo();

    maker.construct(wetBuilder);
    Tire wetTire = wetBuilder.getResult();

    std::cout << "Detalii Wet:" << std::endl;
    wetTire.displayInfo();

    std::cout << "Numar total cauciucuri create: " << Tire::getTotalTires() << std::endl;
    std::cout << "--------------------------------------------\n";


    std::cout << "Alegeti tipul de tricou:\n";
    std::cout << "1. Senna\n";
    std::cout << "2. Schumacher\n";

    int optiune;
    std::cin >> optiune;

    std::unique_ptr<CreatorTricou> creator;
    if (optiune == 1) {
        creator = std::make_unique<CreatorTricouSenna>();
    } else if (optiune == 2) {
        creator = std::make_unique<CreatorTricouSchumacher>();
    } else {
        std::cout << "Optiune invalida\n";
        return 1;
    }

    std::string marime;
    std::cout << "Introduceti marimea tricoului (S, M, L):\n";
    std::cin >> marime;

    std::unique_ptr<Tricou> tricou = creator->creazaTricou(marime);
    tricou->afiseazaDetalii();

    return 0;
}



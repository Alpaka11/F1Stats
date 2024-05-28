#include <iostream>
#include "../headers/commentator.h"

template<typename T>
Commentator<T>::Commentator(const T &name, int experienceYears, const T &channel)
        : name(name), experienceYears(experienceYears), channel(channel) {}

template<typename T>
void Commentator<T>::display() const {
    std::cout << "Nume comentator: " << name << "\n" << "Ani de experienta: " << experienceYears << "\n" << "Canal: "
              << channel << "\n";
}

template<typename T>
void Commentator<T>::changeChannel(const T &newChannel) {
    channel = newChannel;
}





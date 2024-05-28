#ifndef COMMENTATOR_H
#define COMMENTATOR_H

#include <string>

template<typename T>
class Commentator {
private:
    T name;
    int experienceYears;
    T channel;

public:
    Commentator(const T &name, int experienceYears, const T &channel);

    void changeChannel(const T &newChannel);

    void display() const;
};

template
class Commentator<std::string>;

#endif // COMMENTATOR_H

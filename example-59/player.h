#ifndef PLAYER_H
#define PLAYER_H

#include <string>
#include <iostream>
#include "person.h" // inherit public from person class

class Player : public Person
{
    friend std::ostream &operator<<(std::ostream &out, const Player &player);

public:
    Player();

    Player(std::string &game_param);

    Player(const char *game_param);

    ~Player();

    // public Getter
    std::string get_game() const;

private:
    std::string game{"None"};
};

#endif
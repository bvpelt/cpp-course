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
    Player(std::string &game_param, std::string &first_name_param, std::string &last_name_param);

    Player(const char *game_param);
    Player(const char *game_param, const char * first_name_param, const char * last_name_param);

    ~Player();

    // public Getter
    std::string get_game() const;

    void set_game(const char *game);

private:
    std::string game{"None"};
};

#endif
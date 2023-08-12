#include "player.h"

std::ostream &operator<<(std::ostream &out, const Player &player)
{
    out << "Player (" << &player << "): [ game:" << player.game << " names: " << player.get_first_name() << " " << player.get_last_name() << "]";
    return out;
}

Player::Player() = default;

Player::Player(std::string &game_param) : game(game_param)
{
    first_name = "John";
    last_name = "Snow";
}

Player::Player(std::string &game_param, std::string &first_name_param, std::string &last_name_param)
{
    this->game = game_param;
    this->first_name = first_name_param;
    this->last_name = last_name_param;
}

Player::Player(const char *game_param) : game(game_param)
{
    first_name = "Karel";
    last_name = "de Grootte";
}

Player::Player(const char *game_param, const char *first_name_param, const char *last_name_param)
{
    this->game = game_param;
    this->first_name = first_name_param;
    this->last_name = last_name_param;
}

Player::~Player() {}

// Getter
std::string Player::get_game() const
{
    return this->game;
}

// Setter
void Player::set_game(const char *game)
{
    this->game = game;
}

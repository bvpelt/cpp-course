#include "player.h"

std::ostream &operator<<(std::ostream &out, const Player &player)
{
    out << "Player (" << &player << "): [ game:" << player.game << " names: " << player.get_first_name() << " " << player.get_last_name() << "]";
    return out;
}

Player::Player() = default;

Player::Player(std::string &game_param) : game(game_param)
{
}

Player::Player(const char *game_param) : game(game_param)
{
}

Player::~Player() {}

// Getter
std::string Player::get_game() const
{
    return this->game;
}

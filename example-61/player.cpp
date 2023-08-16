#include "player.h"

std::ostream &operator<<(std::ostream &out, const Player &player)
{
    out << "Player (" << &player << "): [ Full name: " << player.get_full_name() << ", Age: " << player.get_age() << ", Address: " << player.get_address() << " ]";
    return out;
}

Player::Player() = default;

Player::~Player()
{
}

void Player::play()
{
    this->m_full_name = "John Snow"; // public access
    this->m_age = 55;                // protected access
    //   m_address = "asdlkfasjdl";   compiler error: ‘std::string Person::m_address’ is private within this context
}
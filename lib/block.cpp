#include "../includes/block.h"
#include <string>

Block::Block(std::string hash) : hash(hash) {}

std::string Block::getHash() { return hash; }
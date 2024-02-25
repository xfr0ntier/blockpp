#include "block.h"
#include <string>
#include <vector>

#ifndef __BLOCKCHAIN_H__
#define __BLOCKCHAIN_H__

class Blockchain {
    std::vector<Block *> blockchain;

  public:
    Blockchain();
    ~Blockchain();

    void appendBlock(const std::string &message);
    void display();
};

#endif
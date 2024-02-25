#include <string>

#ifndef __BLOCK_H__
#define __BLOCK_H__

class Block {
    std::string hash;

  public:
    Block(std::string hash);

    std::string getHash();
};

#endif
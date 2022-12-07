#ifndef BLOCK_H
#define BLOCK_H

#include <cstdint>
#include <iostream>
using namespace std;

class Block
{
  private:
    uint32_t index;
    int64_t nonce;
    string data;
    string hash;
    time_t timestamp;

    string generateHash() const;

  public:
    string previousHash;

    // Constructor
    Block(uint32_t indexIn, const string &dataIn)
    {
      index = indexIn;
      data = dataIn;
      nonce = -1;
      timestamp = time(nullptr);
    }

    string getHash();

    void mineBlock(uint32_t);
};
#endif
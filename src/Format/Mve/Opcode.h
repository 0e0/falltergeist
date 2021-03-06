/*
 * The MIT License (MIT)
 *
 * Copyright (c) 2012-2015 Falltergeist developers
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 */

#ifndef FALLTERGEIST_FORMAT_MVE_OPCODE_H
#define FALLTERGEIST_FORMAT_MVE_OPCODE_H

// C++ standard includes
#include <cstdint>

// Falltergeist includes
#include "../../Base/Buffer.h"

// Third party includes

namespace Falltergeist
{
namespace Format
{
namespace Mve
{

class Opcode
{

public:
    Opcode(uint16_t length);

    uint16_t length() const;

    uint8_t type() const;
    void setType(uint8_t value);

    uint8_t version() const;
    void setVersion(uint8_t value);

    uint8_t* data();

protected:
    uint16_t _length = 0;
    uint8_t _type = 0;
    uint8_t _version = 0;
    Base::Buffer<uint8_t> _data;

};

}
}
}
#endif // FALLTERGEIST_FORMAT_MVE_OPCODE_H

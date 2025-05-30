///////////////////////////////////////////////////////////////////////////////
// Copyright (C) 2020-2025 Aerll - aerlldev@gmail.com
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this softwareand associated documentation files(the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and /or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright noticeand this permission notice shall be included in
// all copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
// FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS
// IN THE SOFTWARE.
//
#include <erroroutput.hpp>

#include <iomanip>
#include <iostream>

namespace errorOutput::print {

void string(std::string_view str, u32 width) {
    std::cerr << std::setw(width) << str << std::setw(0);
}

void stage(std::string_view stageName) {
    std::cerr << ">>> " << stageName << '\n';
}

void stage(std::string_view stageName, const std::string& fileName) {
    std::cerr << ">>> " << stageName << ": '" << fileName << "'\n";
}

void summary(u32 errorsCount, bool failed) {
    if (failed)
        std::cerr << ">>> failed - errors: " << errorsCount << '\n';
    else
        std::cerr << "> \n";
}

void newLine(u32 count) {
    for (u32 i = 0; i < count; ++i)
        std::cerr << '\n';
}

}

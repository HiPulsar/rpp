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
#ifndef RPP_CLI_HPP
#define RPP_CLI_HPP

#include <aliases.hpp>

#include <filesystem>
#include <optional>
#include <vector>

struct CLI {
    std::vector<std::filesystem::path> inputFiles;
    std::optional<std::filesystem::path> output;
    std::optional<isize> memory;
    std::vector<std::filesystem::path> includes;
    bool skipPreprocessor = false;
    bool pause            = true;
};

#endif // RPP_CLI_HPP

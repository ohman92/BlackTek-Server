// Copyright 2024 Black Tek Server Authors. All rights reserved.
// Use of this source code is governed by the GPL-2.0 License that can be found in the LICENSE file.

#define FS_OTPCH_H

// Definitions should be global.
#include "definitions.h"

#include <algorithm>
#include <chrono>
#include <cstdint>
#include <forward_list>
#include <functional>
#include <filesystem>
#include <iomanip>
#include <iostream>
#include <list>
#include <map>
#include <memory>
#include <mutex>
#include <sstream>
#include <string>
#include <thread>
#include <unordered_map>
#include <vector>
#include <boost/algorithm/string.hpp>
#include <boost/asio.hpp>

#include <pugixml.hpp>

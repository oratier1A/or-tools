// Copyright 2010-2012 Google
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#include "graph/shortestpaths.h"

#include <algorithm>
#include <cstddef>
#include <cstring>
#include "base/hash.h"
#include <utility>

#include "base/callback.h"
#include "base/casts.h"
#include "base/commandlineflags.h"
#include "base/integral_types.h"
#include "base/logging.h"
#include "base/macros.h"

DEFINE_int32(shortestpaths_disconnected_distance, 200000,
             "Distance returned when two node are disconnected");
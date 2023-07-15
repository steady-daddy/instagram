// Copyright 2022 gRPC authors.
//
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
#ifndef GRPC_CORE_LIB_EVENT_ENGINE_TIME_UTIL_H
#define GRPC_CORE_LIB_EVENT_ENGINE_TIME_UTIL_H

#include <grpc/support/port_platform.h>

#include <stddef.h>

#include <grpc/event_engine/event_engine.h>

namespace grpc_event_engine {
namespace experimental {

// Convert a duration to milliseconds
size_t Milliseconds(EventEngine::Duration d);

}  // namespace experimental
}  // namespace grpc_event_engine

#endif  // GRPC_CORE_LIB_EVENT_ENGINE_TIME_UTIL_H
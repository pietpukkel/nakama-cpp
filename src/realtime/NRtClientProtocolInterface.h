/*
 * Copyright 2019 The Nakama Authors
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#pragma once

#include "nakama-cpp/NTypes.h"
#include "google/protobuf/message.h"

namespace Nakama {

    class NRtClientProtocolInterface
    {
    public:
        virtual bool serialize(const google::protobuf::Message& message, NBytes& output) = 0;
        virtual bool parse(const NBytes& input, google::protobuf::Message& message) = 0;
    };

    using NRtClientProtocolPtr = std::shared_ptr<NRtClientProtocolInterface>;

}

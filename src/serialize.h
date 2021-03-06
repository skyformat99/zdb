/*
 * ZDB Copyright 2017 Regents of the University of Michigan
 *
 * Licensed under the Apache License, Version 2.0 (the "License"); you may not
 * use this file except in compliance with the License. You may obtain a copy
 * of the License at http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or
 * implied. See the License for the specific language governing
 * permissions and limitations under the License.
 */

#ifndef ZDB_SERIALIZE_H
#define ZDB_SERIALIZE_H

#include <string>

#include "macros.h"

namespace zdb {

template <typename T>
struct deserialize {
  using value_type = T;
  value_type operator()(const std::string& t) const;
};

}  // namespace zdb

#endif /* ZDB_SERIALIZE_H */

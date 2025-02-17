// Copyright (c) 2024 PaddlePaddle Authors. All Rights Reserved.
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

#pragma once

#include <string>
#include <vector>

#include "paddle/phi/api/include/tensor.h"

namespace paddle {
namespace primitive {
namespace backend {

template <typename T>
Tensor full(const IntArray& shape,
            const Scalar& value,
            DataType dtype = DataType::FLOAT32,
            Place place = Place());

template <typename T>
Tensor full_with_tensor(const Tensor& shape,
                        const Scalar& value,
                        DataType dtype = DataType::FLOAT32,
                        Place place = Place());

template <typename T>
Tensor arange_with_tensor(const Tensor& start,
                          const Tensor& end,
                          const Tensor& step,
                          DataType dtype = DataType::FLOAT64,
                          Place place = CPUPlace());

}  // namespace backend
}  // namespace primitive
}  // namespace paddle

// 2021 by Stephan Roslen

#pragma once

#include <type_traits>

namespace util {

template<typename T, typename OtherT>
concept DecaysTo = std::is_same_v<std::decay_t<T>, OtherT>;

}
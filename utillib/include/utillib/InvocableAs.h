// 2021 by Stephan Roslen

#pragma once

#include <type_traits>

namespace util {

namespace detail {

template<typename T, typename Sig>
struct InvocableAsHelper;

template<typename T, typename Res, typename... Args>
struct InvocableAsHelper<T, Res(Args...)> : public std::is_invocable_r<Res, T, Args...> {};

template<typename T, typename Res, typename... Args>
struct InvocableAsHelper<T, Res(Args...) const> : public std::is_invocable_r<Res, std::add_const_t<T>, Args...> {};

template<typename T, typename Res, typename... Args>
struct InvocableAsHelper<T, Res(Args...) noexcept> : public std::is_nothrow_invocable_r<Res, T, Args...> {};

template<typename T, typename Res, typename... Args>
struct InvocableAsHelper<T, Res(Args...) const noexcept>
    : public std::is_nothrow_invocable_r<Res, std::add_const_t<T>, Args...> {};

} // namespace detail

template<typename T, typename Sig>
concept InvocableAs = detail::InvocableAsHelper<std::decay_t<T>, Sig>::value;

} // namespace util
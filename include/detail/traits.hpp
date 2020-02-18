#pragma once

#include <common.hpp>

template<Axis a1, Axis a2, Axis a3>
struct TaitBryanTraits
{
  static constexpr auto a2s = Elem{
    static_cast<std::underlying_type_t<Axis>>(a1),
    static_cast<std::underlying_type_t<Axis>>(a3)};

  static constexpr auto a1s = Elem{
    static_cast<std::underlying_type_t<Axis>>(a2),
    static_cast<std::underlying_type_t<Axis>>(a3)};

  static constexpr auto a1c = Elem{
    static_cast<std::underlying_type_t<Axis>>(a3),
    static_cast<std::underlying_type_t<Axis>>(a3)};

  static constexpr auto a3s = Elem{
    static_cast<std::underlying_type_t<Axis>>(a1),
    static_cast<std::underlying_type_t<Axis>>(a2)};

  static constexpr auto a3c = Elem{
    static_cast<std::underlying_type_t<Axis>>(a1),
    static_cast<std::underlying_type_t<Axis>>(a1)};

  struct GimbalLock {
    static constexpr auto a1s = Elem{
      static_cast<std::underlying_type_t<Axis>>(a2),
      static_cast<std::underlying_type_t<Axis>>(a1)};

    static constexpr auto a1c = Elem{
      static_cast<std::underlying_type_t<Axis>>(a2),
      static_cast<std::underlying_type_t<Axis>>(a2)};
  };
};

template<Axis a1, Axis a2>
struct ProperEulerTraits
{
  static constexpr Axis ma = missing<a1,a2>();
  static constexpr auto a2c = Elem{
    static_cast<std::underlying_type_t<Axis>>(a1),
    static_cast<std::underlying_type_t<Axis>>(a1)};

  static constexpr auto a1s = Elem{
    static_cast<std::underlying_type_t<Axis>>(a2),
    static_cast<std::underlying_type_t<Axis>>(a1)};

  static constexpr auto a1c = Elem{
    static_cast<std::underlying_type_t<Axis>>(ma),
    static_cast<std::underlying_type_t<Axis>>(a1)};

  static constexpr auto a3s = Elem{
    static_cast<std::underlying_type_t<Axis>>(a1),
    static_cast<std::underlying_type_t<Axis>>(a2)};

  static constexpr auto a3c = Elem{
    static_cast<std::underlying_type_t<Axis>>(a1),
    static_cast<std::underlying_type_t<Axis>>(ma)};

  struct GimbalLock {
    static constexpr auto a1s = Elem{
      static_cast<std::underlying_type_t<Axis>>(a2),
      static_cast<std::underlying_type_t<Axis>>(ma)};

    static constexpr auto a1c = Elem{
      static_cast<std::underlying_type_t<Axis>>(a2),
      static_cast<std::underlying_type_t<Axis>>(a2)};
  };
};
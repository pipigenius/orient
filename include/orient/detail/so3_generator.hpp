/* @copyright The code is licensed under the MIT License
 *            <https://opensource.org/licenses/MIT>,
 *            Copyright (c) 2020 Christian Eskil Vaugelade Berg
 * @author Christian Eskil Vaugelade Berg
*/
#pragma once 

#include <orient/axis.hpp>

#include <Eigen/Dense>

namespace orient::detail {

template<Axis axis>
Eigen::Matrix3d make_generator()
{
  Eigen::Matrix3d M = Eigen::Matrix3d::Zero();
  if constexpr(axis == Axis::x){
    M(1,2) = -1;
    M(2,1) = 1;
  }
  else if constexpr(axis == Axis::y){
    M(0,2) = 1;
    M(2,0) = -1;
  }
  else {
    M(0,1) = -1;
    M(1,0) = 1;
  }
  return M;
}

template<Axis axis>
static const auto generator = make_generator<axis>();

}

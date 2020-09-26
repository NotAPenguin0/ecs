#ifndef ECS_ENTITY_HPP_
#define ECS_ENTITY_HPP_

#include <ecs/private/types.hpp>

namespace ecs {

using entity_t = std::uint64_t;
constexpr inline entity_t no_entity = static_cast<entity_t>(-1);

}

#endif
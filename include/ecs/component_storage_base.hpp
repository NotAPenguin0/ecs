#ifndef ECS_COMPONENT_STORAGE_BASE_HPP_
#define ECS_COMPONENT_STORAGE_BASE_HPP_

#include <ecs/private/sparse_set.hpp>
#include <ecs/entity.hpp>

namespace ecs {

class component_storage_base : public detail::sparse_set<entity_t> {
public:
    using sparse_set<entity_t>::sparse_set;
};

}

#endif
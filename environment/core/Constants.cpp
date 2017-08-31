//
// Created by David Li on 7/17/17.
//

#include "Constants.hpp"

auto hlt::GameConstants::to_json() const -> nlohmann::json {
    return {
        { "PLANETS_PER_PLAYER", PLANETS_PER_PLAYER },
        { "EXTRA_PLANETS", EXTRA_PLANETS },

        { "DRAG", DRAG },
        { "MAX_SPEED", MAX_SPEED },
        { "MAX_ACCELERATION", MAX_ACCELERATION },

        { "SHIP_RADIUS", SHIP_RADIUS },

        { "MAX_SHIP_HEALTH", MAX_SHIP_HEALTH },
        { "BASE_SHIP_HEALTH", BASE_SHIP_HEALTH },
        { "DOCKED_SHIP_REGENERATION", DOCKED_SHIP_REGENERATION },

        { "WEAPON_COOLDOWN", WEAPON_COOLDOWN },
        { "WEAPON_RADIUS", WEAPON_RADIUS },
        { "WEAPON_DAMAGE", WEAPON_DAMAGE },
        { "EXPLOSION_RADIUS", EXPLOSION_RADIUS },

        { "DOCK_RADIUS", DOCK_RADIUS },
        { "DOCK_TURNS", DOCK_TURNS },
        { "RESOURCES_PER_RADIUS", RESOURCES_PER_RADIUS },
        { "INFINITE_RESOURCES", INFINITE_RESOURCES },
        { "PRODUCTION_PER_SHIP", PRODUCTION_PER_SHIP },
        { "BASE_PRODUCTIVITY", BASE_PRODUCTIVITY },
        { "ADDITIONAL_PRODUCTIVITY", ADDITIONAL_PRODUCTIVITY },

        { "SPAWN_RADIUS", SPAWN_RADIUS },
    };
}

auto hlt::GameConstants::from_json(const nlohmann::json& json) -> void {
    PLANETS_PER_PLAYER = json.value("PLANETS_PER_PLAYER", PLANETS_PER_PLAYER);
    EXTRA_PLANETS = json.value("EXTRA_PLANETS", EXTRA_PLANETS);

    DRAG = json.value("DRAG", DRAG);
    MAX_SPEED = json.value("MAX_SPEED", MAX_SPEED);
    MAX_ACCELERATION = json.value("MAX_ACCELERATION", MAX_ACCELERATION);

    SHIP_RADIUS = json.value("SHIP_RADIUS", SHIP_RADIUS);

    MAX_SHIP_HEALTH = json.value("MAX_SHIP_HEALTH", MAX_SHIP_HEALTH);
    BASE_SHIP_HEALTH = json.value("BASE_SHIP_HEALTH", BASE_SHIP_HEALTH);
    DOCKED_SHIP_REGENERATION = json.value("DOCKED_SHIP_REGENERATION", DOCKED_SHIP_REGENERATION);

    WEAPON_COOLDOWN = json.value("WEAPON_COOLDOWN", WEAPON_COOLDOWN);
    WEAPON_RADIUS = json.value("WEAPON_RADIUS", WEAPON_RADIUS);
    WEAPON_DAMAGE = json.value("WEAPON_DAMAGE", WEAPON_DAMAGE);
    EXPLOSION_RADIUS = json.value("EXPLOSION_RADIUS", EXPLOSION_RADIUS);

    DOCK_RADIUS = json.value("DOCK_RADIUS", DOCK_RADIUS);
    DOCK_TURNS = json.value("DOCK_TURNS", DOCK_TURNS);
    RESOURCES_PER_RADIUS = json.value("RESOURCES_PER_RADIUS", RESOURCES_PER_RADIUS);
    INFINITE_RESOURCES = json.value("INFINITE_RESOURCES", INFINITE_RESOURCES);
    PRODUCTION_PER_SHIP = json.value("PRODUCTION_PER_SHIP", PRODUCTION_PER_SHIP);
    BASE_PRODUCTIVITY = json.value("BASE_PRODUCTIVITY", BASE_PRODUCTIVITY);
    ADDITIONAL_PRODUCTIVITY = json.value("ADDITIONAL_PRODUCTIVITY", ADDITIONAL_PRODUCTIVITY);

    SPAWN_RADIUS = json.value("SPAWN_RADIUS", SPAWN_RADIUS);
}

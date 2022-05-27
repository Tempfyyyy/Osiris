#pragma once

#include <string_view>

#include "../SDK/WeaponId.h"

namespace inventory_changer::game_items
{
    class Lookup;
    class CrateLootLookup;
}

namespace StaticData
{
    std::wstring_view getWeaponNameUpper(WeaponId weaponID) noexcept;
    std::string_view getWeaponName(WeaponId weaponID) noexcept;

    [[nodiscard]] const inventory_changer::game_items::Lookup& lookup() noexcept;
    [[nodiscard]] const inventory_changer::game_items::CrateLootLookup& crateLoot() noexcept;
}

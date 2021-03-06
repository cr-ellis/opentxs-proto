// Copyright (c) 2018 The Open-Transactions developers
// This Source Code Form is subject to the terms of the Mozilla Public
// License, v. 2.0. If a copy of the MPL was not distributed with this
// file, You can obtain one at http://mozilla.org/MPL/2.0/.

#include "opentxs-proto/Types.hpp"
#include "opentxs-proto/Check.hpp"

#include <iostream>

#define PROTO_NAME "storage contact list"

namespace opentxs
{
namespace proto
{

bool CheckProto_1(const StorageContactAddressIndex& input, const bool silent)
{
    if (false == input.has_contact()) {
        FAIL("storage contact list", "missing contact")
    }

    if (MIN_PLAUSIBLE_IDENTIFIER > input.contact().size()) {
        FAIL2("storage contact list", "invalid contact", input.contact())
    }

    if (MAX_PLAUSIBLE_IDENTIFIER < input.contact().size()) {
        FAIL2("storage contact list", "invalid contact", input.contact())
    }

    const bool validChain = ValidContactItemType(
        {CONTACT_VERSION, CONTACTSECTION_CONTRACT}, input.chain());

    if (false == validChain) {
        FAIL("storage contact list", "invalid type")
    }

    for (const auto& it : input.address()) {
        if (MIN_PLAUSIBLE_IDENTIFIER > it.size()) {
            FAIL2("storage contact list", "invalid address", it)
        }

        if (MAX_PLAUSIBLE_IDENTIFIER < it.size()) {
            FAIL2("storage contact list", "invalid address", it)
        }
    }

    return true;
}

bool CheckProto_2(const StorageContactAddressIndex& input, const bool silent)
{
    UNDEFINED_VERSION("storage contact list", 2)
}

bool CheckProto_3(const StorageContactAddressIndex& input, const bool silent)
{
    UNDEFINED_VERSION("storage contact list", 3)
}

bool CheckProto_4(const StorageContactAddressIndex& input, const bool silent)
{
    UNDEFINED_VERSION("storage contact list", 4)
}

bool CheckProto_5(const StorageContactAddressIndex& input, const bool silent)
{
    UNDEFINED_VERSION("storage contact list", 5)
}

bool CheckProto_6(const StorageContactAddressIndex& input, const bool silent)
{
    UNDEFINED_VERSION2(6)
}

bool CheckProto_7(const StorageContactAddressIndex& input, const bool silent)
{
    UNDEFINED_VERSION2(7)
}

bool CheckProto_8(const StorageContactAddressIndex& input, const bool silent)
{
    UNDEFINED_VERSION2(8)
}

bool CheckProto_9(const StorageContactAddressIndex& input, const bool silent)
{
    UNDEFINED_VERSION2(9)
}

bool CheckProto_10(const StorageContactAddressIndex& input, const bool silent)
{
    UNDEFINED_VERSION2(10)
}

bool CheckProto_11(const StorageContactAddressIndex& input, const bool silent)
{
    UNDEFINED_VERSION2(11)
}

bool CheckProto_12(const StorageContactAddressIndex& input, const bool silent)
{
    UNDEFINED_VERSION2(12)
}

bool CheckProto_13(const StorageContactAddressIndex& input, const bool silent)
{
    UNDEFINED_VERSION2(13)
}

bool CheckProto_14(const StorageContactAddressIndex& input, const bool silent)
{
    UNDEFINED_VERSION2(14)
}

bool CheckProto_15(const StorageContactAddressIndex& input, const bool silent)
{
    UNDEFINED_VERSION2(15)
}

bool CheckProto_16(const StorageContactAddressIndex& input, const bool silent)
{
    UNDEFINED_VERSION2(16)
}

bool CheckProto_17(const StorageContactAddressIndex& input, const bool silent)
{
    UNDEFINED_VERSION2(17)
}

bool CheckProto_18(const StorageContactAddressIndex& input, const bool silent)
{
    UNDEFINED_VERSION2(18)
}

bool CheckProto_19(const StorageContactAddressIndex& input, const bool silent)
{
    UNDEFINED_VERSION2(19)
}

bool CheckProto_20(const StorageContactAddressIndex& input, const bool silent)
{
    UNDEFINED_VERSION2(20)
}
}  // namespace proto
}  // namespace opentxs

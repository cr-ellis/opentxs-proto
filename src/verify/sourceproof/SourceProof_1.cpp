// Copyright (c) 2018 The Open-Transactions developers
// This Source Code Form is subject to the terms of the Mozilla Public
// License, v. 2.0. If a copy of the MPL was not distributed with this
// file, You can obtain one at http://mozilla.org/MPL/2.0/.

#include "opentxs-proto/Types.hpp"
#include "opentxs-proto/Check.hpp"

#include <iostream>

#define PROTO_NAME "source proof"

namespace opentxs
{
namespace proto
{

bool CheckProto_1(
    const SourceProof& input,
    const bool silent,
    bool& ExpectSourceSignature)
{
    if (!input.has_type()) {
        FAIL("source proof", "missing type")
    }

    switch (input.type()) {
        case SOURCEPROOFTYPE_SELF_SIGNATURE:
            ExpectSourceSignature = false;

            break;
        case SOURCEPROOFTYPE_SIGNATURE:
            ExpectSourceSignature = true;

            break;
        default:
            FAIL2("source proof", "incorrect or unknown type", input.type())
    }

    return true;
}

bool CheckProto_2(const SourceProof& input, const bool silent, bool&)
{
    UNDEFINED_VERSION("source proof", 2)
}

bool CheckProto_3(const SourceProof& input, const bool silent, bool&)
{
    UNDEFINED_VERSION("source proof", 3)
}

bool CheckProto_4(const SourceProof& input, const bool silent, bool&)
{
    UNDEFINED_VERSION("source proof", 4)
}

bool CheckProto_5(const SourceProof& input, const bool silent, bool&)
{
    UNDEFINED_VERSION("source proof", 5)
}

bool CheckProto_6(const SourceProof& input, const bool silent, bool&)
{
    UNDEFINED_VERSION2(6)
}

bool CheckProto_7(const SourceProof& input, const bool silent, bool&)
{
    UNDEFINED_VERSION2(7)
}

bool CheckProto_8(const SourceProof& input, const bool silent, bool&)
{
    UNDEFINED_VERSION2(8)
}

bool CheckProto_9(const SourceProof& input, const bool silent, bool&)
{
    UNDEFINED_VERSION2(9)
}

bool CheckProto_10(const SourceProof& input, const bool silent, bool&)
{
    UNDEFINED_VERSION2(10)
}

bool CheckProto_11(const SourceProof& input, const bool silent, bool&)
{
    UNDEFINED_VERSION2(11)
}

bool CheckProto_12(const SourceProof& input, const bool silent, bool&)
{
    UNDEFINED_VERSION2(12)
}

bool CheckProto_13(const SourceProof& input, const bool silent, bool&)
{
    UNDEFINED_VERSION2(13)
}

bool CheckProto_14(const SourceProof& input, const bool silent, bool&)
{
    UNDEFINED_VERSION2(14)
}

bool CheckProto_15(const SourceProof& input, const bool silent, bool&)
{
    UNDEFINED_VERSION2(15)
}

bool CheckProto_16(const SourceProof& input, const bool silent, bool&)
{
    UNDEFINED_VERSION2(16)
}

bool CheckProto_17(const SourceProof& input, const bool silent, bool&)
{
    UNDEFINED_VERSION2(17)
}

bool CheckProto_18(const SourceProof& input, const bool silent, bool&)
{
    UNDEFINED_VERSION2(18)
}

bool CheckProto_19(const SourceProof& input, const bool silent, bool&)
{
    UNDEFINED_VERSION2(19)
}

bool CheckProto_20(const SourceProof& input, const bool silent, bool&)
{
    UNDEFINED_VERSION2(20)
}
}  // namespace proto
}  // namespace opentxs

// Copyright (c) 2018 The Open-Transactions developers
// This Source Code Form is subject to the terms of the Mozilla Public
// License, v. 2.0. If a copy of the MPL was not distributed with this
// file, You can obtain one at http://mozilla.org/MPL/2.0/.

#include "opentxs-proto/Types.hpp"
#include "opentxs-proto/Check.hpp"

#include <iostream>

#define PROTO_NAME "notice acknowledgedment"

namespace opentxs
{
namespace proto
{

bool CheckProto_1(const NoticeAcknowledgement& input, const bool silent)
{
    if (!input.has_ack()) {
        FAIL("notice acknowledgedment", "missing ack/nack")
    }

    return true;
}

bool CheckProto_2(const NoticeAcknowledgement& input, const bool silent)
{

    return CheckProto_1(input, silent);
}

bool CheckProto_3(const NoticeAcknowledgement& input, const bool silent)
{

    return CheckProto_1(input, silent);
}

bool CheckProto_4(const NoticeAcknowledgement& input, const bool silent)
{

    return CheckProto_1(input, silent);
}

bool CheckProto_5(const NoticeAcknowledgement& input, const bool silent)
{
    UNDEFINED_VERSION("notice acknowledgedment", 5)
}

bool CheckProto_6(const NoticeAcknowledgement& input, const bool silent)
{
    UNDEFINED_VERSION2(6)
}

bool CheckProto_7(const NoticeAcknowledgement& input, const bool silent)
{
    UNDEFINED_VERSION2(7)
}

bool CheckProto_8(const NoticeAcknowledgement& input, const bool silent)
{
    UNDEFINED_VERSION2(8)
}

bool CheckProto_9(const NoticeAcknowledgement& input, const bool silent)
{
    UNDEFINED_VERSION2(9)
}

bool CheckProto_10(const NoticeAcknowledgement& input, const bool silent)
{
    UNDEFINED_VERSION2(10)
}

bool CheckProto_11(const NoticeAcknowledgement& input, const bool silent)
{
    UNDEFINED_VERSION2(11)
}

bool CheckProto_12(const NoticeAcknowledgement& input, const bool silent)
{
    UNDEFINED_VERSION2(12)
}

bool CheckProto_13(const NoticeAcknowledgement& input, const bool silent)
{
    UNDEFINED_VERSION2(13)
}

bool CheckProto_14(const NoticeAcknowledgement& input, const bool silent)
{
    UNDEFINED_VERSION2(14)
}

bool CheckProto_15(const NoticeAcknowledgement& input, const bool silent)
{
    UNDEFINED_VERSION2(15)
}

bool CheckProto_16(const NoticeAcknowledgement& input, const bool silent)
{
    UNDEFINED_VERSION2(16)
}

bool CheckProto_17(const NoticeAcknowledgement& input, const bool silent)
{
    UNDEFINED_VERSION2(17)
}

bool CheckProto_18(const NoticeAcknowledgement& input, const bool silent)
{
    UNDEFINED_VERSION2(18)
}

bool CheckProto_19(const NoticeAcknowledgement& input, const bool silent)
{
    UNDEFINED_VERSION2(19)
}

bool CheckProto_20(const NoticeAcknowledgement& input, const bool silent)
{
    UNDEFINED_VERSION2(20)
}
}  // namespace proto
}  // namespace opentxs

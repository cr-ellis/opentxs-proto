// Copyright (c) 2018 The Open-Transactions developers
// This Source Code Form is subject to the terms of the Mozilla Public
// License, v. 2.0. If a copy of the MPL was not distributed with this
// file, You can obtain one at http://mozilla.org/MPL/2.0/.

#include "opentxs-proto/Types.hpp"
#include "opentxs-proto/Check.hpp"

#include <iostream>

namespace opentxs
{
namespace proto
{

bool CheckProto_1(
    const Signature& input,
    const bool silent,
    const std::string& selfID,
    const std::string& masterID,
    std::uint32_t& selfPublic,
    std::uint32_t& selfPrivate,
    std::uint32_t& masterPublic,
    std::uint32_t& sourcePublic,
    const SignatureRole role)
{
    if (!input.has_role()) {
        FAIL("signature", "missing role")
    }

    switch (input.role()) {
        case SIGROLE_PUBCREDENTIAL:
        case SIGROLE_PRIVCREDENTIAL:
        case SIGROLE_NYMIDSOURCE:
        case SIGROLE_CLAIM:
        case SIGROLE_SERVERCONTRACT:
        case SIGROLE_UNITDEFINITION:
        case SIGROLE_PEERREQUEST:
        case SIGROLE_PEERREPLY: {
            break;
        }
        default: {
            FAIL2("signature", "invalid role", input.role())
        }
    }

    if ((SIGROLE_ERROR != role) && (role != input.role())) {
        FAIL3("signature", "incorrect role", input.role(), " specified ", role)
    }

    if (proto::SIGROLE_NYMIDSOURCE != input.role()) {

        if (!input.has_credentialid()) {
            FAIL("signature", " missing credential identifier")
        }

        if (MIN_PLAUSIBLE_IDENTIFIER > input.credentialid().size()) {
            FAIL2("signature", "invalid credential id", input.credentialid())
        }
    }

    if (!input.has_hashtype()) {
        FAIL("signature", "missing hashtype")
    }

    if (input.hashtype() > proto::HASHTYPE_BLAKE2B512) {
        FAIL2("signature", "invalid hash type", input.hashtype())
    }

    if (!input.has_signature()) {
        FAIL("signature", "missing signature")
    }

    if (MIN_PLAUSIBLE_SIGNATURE > input.signature().size()) {
        FAIL("signature", "invalid signature")
    }

    if ((SIGROLE_PUBCREDENTIAL == input.role()) &&
        (selfID == input.credentialid())) {
        selfPublic += 1;
    }

    if ((SIGROLE_PUBCREDENTIAL == input.role()) &&
        (masterID == input.credentialid())) {
        masterPublic += 1;
    }

    if ((SIGROLE_PRIVCREDENTIAL == input.role()) &&
        (selfID == input.credentialid())) {
        selfPrivate += 1;
    }

    if (SIGROLE_NYMIDSOURCE == input.role()) {
        sourcePublic += 1;
    }

    return true;
}

bool CheckProto_1(
    const Signature& input,
    const bool silent,
    const SignatureRole role)
{
    std::uint32_t unused = 0;

    return CheckProto_1(
        input, silent, "", "", unused, unused, unused, unused, role);
}
}  // namespace proto
}  // namespace opentxs

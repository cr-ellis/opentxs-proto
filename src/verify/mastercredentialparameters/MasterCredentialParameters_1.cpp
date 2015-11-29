/************************************************************
 *
 *                 OPEN TRANSACTIONS
 *
 *       Financial Cryptography and Digital Cash
 *       Library, Protocol, API, Server, CLI, GUI
 *
 *       -- Anonymous Numbered Accounts.
 *       -- Untraceable Digital Cash.
 *       -- Triple-Signed Receipts.
 *       -- Cheques, Vouchers, Transfers, Inboxes.
 *       -- Basket Currencies, Markets, Payment Plans.
 *       -- Signed, XML, Ricardian-style Contracts.
 *       -- Scripted smart contracts.
 *
 *  EMAIL:
 *  fellowtraveler@opentransactions.org
 *
 *  WEBSITE:
 *  http://www.opentransactions.org/
 *
 *  -----------------------------------------------------
 *
 *   LICENSE:
 *   This Source Code Form is subject to the terms of the
 *   Mozilla Public License, v. 2.0. If a copy of the MPL
 *   was not distributed with this file, You can obtain one
 *   at http://mozilla.org/MPL/2.0/.
 *
 *   DISCLAIMER:
 *   This program is distributed in the hope that it will
 *   be useful, but WITHOUT ANY WARRANTY; without even the
 *   implied warranty of MERCHANTABILITY or FITNESS FOR A
 *   PARTICULAR PURPOSE.  See the Mozilla Public License
 *   for more details.
 *
 ************************************************************/

#include "../../../include/verify/MasterCredentialParameters.hpp"

#include <iostream>

namespace opentxs { namespace proto
{

bool MasterCredentialParameters_1(
    const MasterCredentialParameters& serializedMasterParams,
    const SourceType sourceType)
{
    bool validSource = false;
    bool validProof = false;

    validSource = Verify(
        serializedMasterParams.source(),
        MasterParamsAllowedNymIDSource.at(serializedMasterParams.version()).first,
        MasterParamsAllowedNymIDSource.at(serializedMasterParams.version()).second,
        sourceType);

    if (!validSource) {
        std::cerr << "Verify serialized master parameters failed: invalid nym id source." << std::endl;
        return false;
    }

    switch (sourceType) {
        case SOURCETYPE_SELF :
            if (serializedMasterParams.has_sourceproof()) {
                std::cerr << "Verify serialized master parameters failed: self-signed credential contains source proof." << std::endl;
                return false;
            }
            validProof = true;

            break;
        default :
            std::cerr << "Verify serialized master parameters failed: incorrect or unknown source type ("
            << sourceType << ")." << std::endl;

            return false;
    }

    if (!validProof) {
        std::cerr << "Verify serialized master parameters failed: invalid nym id source proof." << std::endl;
        return false;
    }

    return true;
}

} // namespace proto
} // namespace opentxs
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

#include "opentxs-proto/Types.hpp"
#include "opentxs-proto/Check.hpp"

#include <iostream>

namespace opentxs
{
namespace proto
{

bool CheckProto_4(const StorageNym& input, const bool silent)
{
    if (input.has_credlist()) {
        try {
            const bool valid = Check(
                input.credlist(),
                StorageNymAllowedHash.at(input.version()).first,
                StorageNymAllowedHash.at(input.version()).second,
                silent);

            if (!valid) {
                FAIL("storage nym", "invalid credential list")
            }
        } catch (const std::out_of_range&) {
            FAIL2(
                "storage nym",
                "allowed storage item hash version not defined for version",
                input.version())
        }
    }

    if (input.has_sentpeerrequests()) {
        try {
            const bool valid = Check(
                input.sentpeerrequests(),
                StorageNymAllowedHash.at(input.version()).first,
                StorageNymAllowedHash.at(input.version()).second,
                silent);

            if (!valid) {
                FAIL("storage nym", "invalid sentpeerrequests")
            }
        } catch (const std::out_of_range&) {
            FAIL2(
                "storage nym",
                "allowed storage item hash version not defined for version",
                input.version())
        }
    }

    if (input.has_incomingpeerrequests()) {
        try {
            const bool valid = Check(
                input.incomingpeerrequests(),
                StorageNymAllowedHash.at(input.version()).first,
                StorageNymAllowedHash.at(input.version()).second,
                silent);

            if (!valid) {
                FAIL("storage nym", "invalid incomingpeerrequests")
            }
        } catch (const std::out_of_range&) {
            FAIL2(
                "storage nym",
                "allowed storage item hash version not defined for version",
                input.version())
        }
    }

    if (input.has_sentpeerreply()) {
        try {
            const bool valid = Check(
                input.sentpeerreply(),
                StorageNymAllowedHash.at(input.version()).first,
                StorageNymAllowedHash.at(input.version()).second,
                silent);

            if (!valid) {
                FAIL("storage nym", "invalid sentpeerreply")
            }
        } catch (const std::out_of_range&) {
            FAIL2(
                "storage nym",
                "allowed storage item hash version not defined for version",
                input.version())
        }
    }

    if (input.has_incomingpeerreply()) {
        try {
            const bool valid = Check(
                input.incomingpeerreply(),
                StorageNymAllowedHash.at(input.version()).first,
                StorageNymAllowedHash.at(input.version()).second,
                silent);

            if (!valid) {
                FAIL("storage nym", "invalid incomingpeerreply")
            }
        } catch (const std::out_of_range&) {
            FAIL2(
                "storage nym",
                "allowed storage item hash version not defined for version",
                input.version())
        }
    }

    if (input.has_finishedpeerrequest()) {
        try {
            const bool valid = Check(
                input.finishedpeerrequest(),
                StorageNymAllowedHash.at(input.version()).first,
                StorageNymAllowedHash.at(input.version()).second,
                silent);

            if (!valid) {
                FAIL("storage nym", "invalid finishedpeerrequest")
            }
        } catch (const std::out_of_range&) {
            FAIL2(
                "storage nym",
                "allowed storage item hash version not defined for version",
                input.version())
        }
    }

    if (input.has_finishedpeerreply()) {
        try {
            const bool valid = Check(
                input.finishedpeerreply(),
                StorageNymAllowedHash.at(input.version()).first,
                StorageNymAllowedHash.at(input.version()).second,
                silent);

            if (!valid) {
                FAIL("storage nym", "invalid finishedpeerreply")
            }
        } catch (const std::out_of_range&) {
            FAIL2(
                "storage nym",
                "allowed storage item hash version not defined for version",
                input.version())
        }
    }

    if (input.has_processedpeerrequest()) {
        try {
            const bool valid = Check(
                input.processedpeerrequest(),
                StorageNymAllowedHash.at(input.version()).first,
                StorageNymAllowedHash.at(input.version()).second,
                silent);

            if (!valid) {
                FAIL("storage nym", "invalid processedpeerrequest")
            }
        } catch (const std::out_of_range&) {
            FAIL2(
                "storage nym",
                "allowed storage item hash version not defined for version",
                input.version())
        }
    }

    if (input.has_processedpeerreply()) {
        try {
            const bool valid = Check(
                input.processedpeerreply(),
                StorageNymAllowedHash.at(input.version()).first,
                StorageNymAllowedHash.at(input.version()).second,
                silent);

            if (!valid) {
                FAIL("storage nym", "invalid processedpeerreply")
            }
        } catch (const std::out_of_range&) {
            FAIL2(
                "storage nym",
                "allowed storage item hash version not defined for version",
                input.version())
        }
    }

    if (input.has_mailinbox()) {
        try {
            const bool valid = Check(
                input.mailinbox(),
                StorageNymAllowedHash.at(input.version()).first,
                StorageNymAllowedHash.at(input.version()).second,
                silent);

            if (!valid) {
                FAIL("storage nym", "invalid mailinbox")
            }
        } catch (const std::out_of_range&) {
            FAIL2(
                "storage nym",
                "allowed storage item hash version not defined for version",
                input.version())
        }
    }

    if (input.has_mailoutbox()) {
        try {
            const bool valid = Check(
                input.mailoutbox(),
                StorageNymAllowedHash.at(input.version()).first,
                StorageNymAllowedHash.at(input.version()).second,
                silent);

            if (!valid) {
                FAIL("storage nym", "invalid mailoutbox")
            }
        } catch (const std::out_of_range&) {
            FAIL2(
                "storage nym",
                "allowed storage item hash version not defined for version",
                input.version())
        }
    }

    if (input.has_threads()) {
        try {
            const bool valid = Check(
                input.threads(),
                StorageNymAllowedHash.at(input.version()).first,
                StorageNymAllowedHash.at(input.version()).second,
                silent);

            if (!valid) {
                FAIL("storage nym", "invalid threads")
            }
        } catch (const std::out_of_range&) {
            FAIL2(
                "storage nym",
                "allowed storage item hash version not defined for version",
                input.version())
        }
    }

    if (input.has_contexts()) {
        try {
            const bool valid = Check(
                input.contexts(),
                StorageNymAllowedHash.at(input.version()).first,
                StorageNymAllowedHash.at(input.version()).second,
                silent);

            if (!valid) {
                FAIL("storage nym", "invalid contexts")
            }
        } catch (const std::out_of_range&) {
            FAIL2(
                "storage nym",
                "allowed storage item hash version not defined for version",
                input.version())
        }
    }

    if (input.has_accounts()) {
        try {
            const bool valid = Check(
                input.accounts(),
                StorageNymAllowedHash.at(input.version()).first,
                StorageNymAllowedHash.at(input.version()).second,
                silent);

            if (!valid) {
                FAIL("storage nym", "invalid accounts")
            }
        } catch (const std::out_of_range&) {
            FAIL2(
                "storage nym",
                "allowed storage item hash version not defined for version",
                input.version())
        }
    }

    for (const auto& index : input.blockchainaccountindex()) {
        try {
            const bool valid = Check(
                index,
                StorageNymAllowedBlockchainAccountList.at(input.version())
                    .first,
                StorageNymAllowedBlockchainAccountList.at(input.version())
                    .second,
                silent);

            if (!valid) {
                FAIL("storage nym", "invalid blockchain account index")
            }
        } catch (const std::out_of_range&) {
            FAIL2(
                "storage nym",
                "allowed storage item hash version not defined for version",
                input.version())
        }
    }

    for (const auto& bip44 : input.blockchainaccount()) {
        try {
            const bool valid = Check(
                bip44,
                StorageNymAllowedBip44Account.at(input.version()).first,
                StorageNymAllowedBip44Account.at(input.version()).second,
                silent);

            if (!valid) {
                FAIL("storage nym", "invalid blockchain account")
            }
        } catch (const std::out_of_range&) {
            FAIL2(
                "storage nym",
                "allowed storage item hash version not defined for version",
                input.version())
        }
    }

    return true;
}

bool CheckProto_5(const StorageNym& input, const bool silent)
{
    UNDEFINED_VERSION("storage nym", 5)
}
}  // namespace proto
}  // namespace opentxs

// Copyright (c) 2018-2019, The TurtleCoin Developers
//
// Please see the included LICENSE file for more information.

#pragma once

#include <walletbackend/WalletBackend.h>

void transfer(const std::shared_ptr<WalletBackend> walletBackend, const bool sendAll);

void sendTransaction(
    const std::shared_ptr<WalletBackend> walletBackend,
    const std::string address,
    const uint64_t amount,
    const uint64_t deadline,    //deadline 추가(어떤 형태인지는 추가적으로 생각해봐야함.)
    const std::string paymentID,
    const bool sendAll = false);

bool confirmTransaction(
    const std::shared_ptr<WalletBackend> walletBackend,
    const std::string address,
    const uint64_t amount,
    const uint64_t deadline,  //deadline 추가
    const std::string paymentID,
    const uint64_t nodeFee,
    const uint64_t fee);

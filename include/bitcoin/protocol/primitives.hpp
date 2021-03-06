/**
 * Copyright (c) 2011-2017 libbitcoin developers (see AUTHORS)
 *
 * This file is part of libbitcoin.
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Affero General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Affero General Public License for more details.
 *
 * You should have received a copy of the GNU Affero General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#ifdef LIBBITCOIN_VERSION4

#ifndef LIBBITCOIN_PROTOCOL_PRIMITIVES_HPP
#define LIBBITCOIN_PROTOCOL_PRIMITIVES_HPP

#include <bitcoin/protocol/interface.pb.h>

namespace libbitcoin {
namespace protocol {

// typedef std::vector<bc::protocol::filter> filter_list;
typedef google::protobuf::RepeatedPtrField<filter> filter_list;

// typedef std::vector<bc::protocol::block_header> block_header_list;
typedef google::protobuf::RepeatedPtrField<block_header> block_header_list;

// typedef std::vector<bc::protocol::tx_result> transaction_result_list;
typedef google::protobuf::RepeatedPtrField<tx_result> transaction_result_list;

// typedef std::vector<bc::protocol::tx_hash_result> transaction_hash_result_list;
typedef google::protobuf::RepeatedPtrField<tx_hash_result> transaction_hash_result_list;

// typedef std::vector<bc::protocol::utxo_result> utxo_result_list;
typedef google::protobuf::RepeatedPtrField<utxo_result> utxo_result_list;

}
}

#endif

#endif

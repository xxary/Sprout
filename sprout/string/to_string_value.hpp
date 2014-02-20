/*=============================================================================
  Copyright (c) 2011-2014 Bolero MURAKAMI
  https://github.com/bolero-MURAKAMI/Sprout

  Distributed under the Boost Software License, Version 1.0. (See accompanying
  file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
=============================================================================*/
#ifndef SPROUT_STRING_TO_STRING_VALUE_HPP
#define SPROUT_STRING_TO_STRING_VALUE_HPP

#include <utility>
#include <sprout/config.hpp>
#include <sprout/utility/forward.hpp>
#include <sprout/string/string.hpp>

namespace sprout {
	//
	// to_string_value
	//	[[deprecated]]
	//
	struct SPROUT_DEPRECATED to_string_value {
	public:
		template<typename T>
		SPROUT_CONSTEXPR decltype(sprout::to_string(std::declval<T>()))
		operator()(T&& x)
		const SPROUT_NOEXCEPT_EXPR(SPROUT_NOEXCEPT_EXPR(sprout::to_string(std::declval<T>())))
		{
			return sprout::to_string(sprout::forward<T>(x));
		}
	};
}	// namespace sprout

#endif	// #ifndef SPROUT_STRING_TO_STRING_VALUE_HPP

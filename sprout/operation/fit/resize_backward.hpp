#ifndef SPROUT_OPERATION_FIT_RESIZE_BACKWARD_HPP
#define SPROUT_OPERATION_FIT_RESIZE_BACKWARD_HPP

#include <cstddef>
#include <sprout/config.hpp>
#include <sprout/fixed_container/traits.hpp>
#include <sprout/fixed_container/functions.hpp>
#include <sprout/operation/fixed/resize_backward.hpp>
#include <sprout/sub_array.hpp>

namespace sprout {
	namespace fit {
		namespace result_of {
			//
			// resize_backward
			//
			template<std::size_t N, typename Container>
			struct resize_backward {
			public:
				typedef sprout::sub_array<
					typename sprout::fixed_container_traits<
						typename sprout::fixed::result_of::resize_backward<N, Container>::type
					>::internal_type
				> type;
			};
		}	// namespace result_of

		//
		// resize_backward
		//
		template<std::size_t N, typename Container, typename T>
		SPROUT_CONSTEXPR inline typename sprout::fit::result_of::resize_backward<N, Container>::type resize_backward(
			Container const& cont,
			T const& v
			)
		{
			return sprout::sub_copy(
				sprout::get_fixed(sprout::fixed::resize_backward<N>(cont, v)),
				0,
				sprout::fixed_container_traits<typename sprout::fit::result_of::resize_backward<N, Container>::type>::fixed_size
				);
		}

		//
		// resize_backward
		//
		template<std::size_t N, typename Container>
		SPROUT_CONSTEXPR inline typename sprout::fit::result_of::resize_backward<N, Container>::type resize_backward(
			Container const& cont
			)
		{
			return sprout::sub_copy(
				sprout::get_fixed(sprout::fixed::resize_backward<N>(cont)),
				0,
				sprout::fixed_container_traits<typename sprout::fit::result_of::resize_backward<N, Container>::type>::fixed_size
				);
		}
	}	// namespace fit
}	// namespace sprout

#endif	// #ifndef SPROUT_OPERATION_FIT_RESIZE_BACKWARD_HPP
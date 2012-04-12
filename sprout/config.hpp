#ifndef SPROUT_CONFIG_HPP
#define SPROUT_CONFIG_HPP

#ifndef SPROUT_CONFIG_DISABLE_CONSTEXPR
#	define SPROUT_CONSTEXPR constexpr
#	define SPROUT_CONSTEXPR_OR_CONST constexpr
#	define SPROUT_STATIC_CONSTEXPR static constexpr
#else	// #ifndef SPROUT_CONFIG_DISABLE_CONSTEXPR
#	define SPROUT_CONSTEXPR
#	define SPROUT_CONSTEXPR_OR_CONST const
#	define SPROUT_STATIC_CONSTEXPR static const
#endif	// #ifndef SPROUT_CONFIG_DISABLE_CONSTEXPR

#ifndef SPROUT_CONFIG_DISABLE_NOEXCEPT
#	define SPROUT_NOEXCEPT noexcept
#	define SPROUT_NOEXCEPT_EXPR(EXPR) noexcept(EXPR)
#else	// #ifndef SPROUT_CONFIG_DISABLE_NOEXCEPT
#	define SPROUT_NOEXCEPT
#	define SPROUT_NOEXCEPT_EXPR(EXPR)
#endif	// #ifndef SPROUT_CONFIG_DISABLE_NOEXCEPT

#ifndef SPROUT_CONFIG_DISABLE_TEMPLATE_ALIASES
#	define SPROUT_USE_TEMPLATE_ALIASES 1
#else	// #ifndef SPROUT_CONFIG_DISABLE_TEMPLATE_ALIASES
#	define SPROUT_USE_TEMPLATE_ALIASES 0
#endif	// #ifndef SPROUT_CONFIG_DISABLE_TEMPLATE_ALIASES

#ifndef SPROUT_CONFIG_DISABLE_USER_DEFINED_LITERALS
#	define SPROUT_USE_USER_DEFINED_LITERALS 1
#else	// #ifndef SPROUT_CONFIG_DISABLE_USER_DEFINED_LITERALS
#	define SPROUT_USE_USER_DEFINED_LITERALS 0
#endif	// #ifndef SPROUT_CONFIG_DISABLE_USER_DEFINED_LITERALS

#ifndef SPROUT_CONFIG_DISABLE_DELEGATING_CONSTRUCTORS
#	define SPROUT_USE_DELEGATING_CONSTRUCTORS 1
#else	// #ifndef SPROUT_CONFIG_DISABLE_DELEGATING_CONSTRUCTORS
#	define SPROUT_USE_DELEGATING_CONSTRUCTORS 0
#endif	// #ifndef SPROUT_CONFIG_DISABLE_DELEGATING_CONSTRUCTORS

#ifndef SPROUT_CONFIG_USE_SSCRISK_CEL
#	define HDR_FUNCTIONAL_SSCRISK_CEL_OR_SPROUT <sprout/functional/functor.hpp>
#	define HDR_ALGORITHM_SSCRISK_CEL_OR_SPROUT <sprout/algorithm/non_modifying.hpp>
#	define HDR_ITERATOR_SSCRISK_CEL_OR_SPROUT <sprout/iterator/operation.hpp>
#	define NS_SSCRISK_CEL_OR_SPROUT sprout
#else	// #ifndef SPROUT_CONFIG_USE_SSCRISK_CEL
#	define HDR_FUNCTIONAL_SSCRISK_CEL_OR_SPROUT <sscrisk/cel/functional.hpp>
#	define HDR_ALGORITHM_SSCRISK_CEL_OR_SPROUT <sscrisk/cel/algorithm.hpp>
#	define HDR_ITERATOR_SSCRISK_CEL_OR_SPROUT <sscrisk/cel/iterator.hpp>
#	define NS_SSCRISK_CEL_OR_SPROUT sscrisk::cel
#endif	// #ifndef SPROUT_CONFIG_USE_SSCRISK_CEL

#ifndef SPROUT_CONFIG_DISABLE_SUPPORT_TEMPORARY_CONTAINER_ITERATION
#	define SPROUT_USE_INDEX_ITERATOR_IMPLEMENTATION 1
#else	// #ifndef SPROUT_CONFIG_DISABLE_SUPPORT_TEMPORARY_CONTAINER_ITERATION
#	ifdef SPROUT_CONFIG_SUPPORT_TEMPORARY_CONTAINER_ITERATION
#		error config conflict: SPROUT_CONFIG_DISABLE_SUPPORT_TEMPORARY_CONTAINER_ITERATION, SPROUT_CONFIG_DISABLE_SUPPORT_TEMPORARY_CONTAINER_ITERATION
#	endif	// #ifndef SPROUT_CONFIG_SUPPORT_TEMPORARY_CONTAINER_ITERATION
#	define SPROUT_USE_INDEX_ITERATOR_IMPLEMENTATION 0
#endif	// #ifndef SPROUT_CONFIG_DISABLE_SUPPORT_TEMPORARY_CONTAINER_ITERATION

#endif	// #ifndef SPROUT_CONFIG_HPP

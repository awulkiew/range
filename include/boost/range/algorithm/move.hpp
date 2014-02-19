// Boost.Range library
//
//  Copyright Neil Groves 2009.
//  Copyright Adam Wulkiewicz 2014.
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
// http://www.boost.org/LICENSE_1_0.txt)

#ifndef BOOST_RANGE_ALGORITHM_MOVE_HPP
#define BOOST_RANGE_ALGORITHM_MOVE_HPP

#include <boost/concept_check.hpp>
#include <boost/range/begin.hpp>
#include <boost/range/end.hpp>
#include <boost/range/concepts.hpp>
//#include <boost/range/iterator_range.hpp>

#include <boost/move.hpp>

namespace boost {

namespace range {

/// \brief template function move
///
/// range-based version of the C++11 move std algorithm
///
/// \pre SinglePassRange is a model of the SinglePassRangeConcept
/// \pre OutputIterator is a model of the OutputIteratorConcept
template< class SinglePassRange, class OutputIterator >
inline OutputIterator move(SinglePassRange & rng, OutputIterator out)
{
    BOOST_RANGE_CONCEPT_ASSERT(( SinglePassRangeConcept<SinglePassRange> ));
    return ::boost::move(::boost::begin(rng), ::boost::end(rng), out);
}

} // namespace range

using range::move;

} // namespace boost

#endif // BOOST_RANGE_ALGORITHM_MOVE_HPP

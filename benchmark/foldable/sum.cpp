/*
@copyright Louis Dionne 2015
Distributed under the Boost Software License, Version 1.0.
(See accompanying file LICENSE.md or copy at http://boost.org/LICENSE_1_0.txt)
 */

#include <boost/hana/fwd/foldable.hpp>

#include "benchmark.hpp"

<%= setup %>


int main() {
    auto foldable = <%= foldable %>;

    boost::hana::benchmark::measure([=] {
        boost::hana::sum<>(foldable);
    });
}

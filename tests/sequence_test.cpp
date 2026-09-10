#include <catch2/catch_test_macros.hpp>
#include <catch2/benchmark/catch_benchmark.hpp>
#include <catch2/benchmark/catch_constructor.hpp>
#include <catch2/generators/catch_generators_range.hpp>

#include "../src/sequence.hpp"

TEST_CASE( "naiveSequence computes correctly" ) {
    REQUIRE(naiveSequence(1) == 1);
    REQUIRE(naiveSequence(2) == 1);
    REQUIRE(naiveSequence(3) == 2);
    REQUIRE(naiveSequence(4) == 3);
    REQUIRE(naiveSequence(5) == 3);
    REQUIRE(naiveSequence(6) == 4);
    REQUIRE(naiveSequence(7) == 4);
    REQUIRE(naiveSequence(8) == 5);
    REQUIRE(naiveSequence(9) == 6);
}

TEST_CASE( "optimizedSequence computes correctly" ) {
    REQUIRE(optimizedSequence(1) == 1);
    REQUIRE(optimizedSequence(2) == 1);
    REQUIRE(optimizedSequence(3) == 2);
    REQUIRE(optimizedSequence(4) == 3);
    REQUIRE(optimizedSequence(5) == 3);
    REQUIRE(optimizedSequence(6) == 4);
    REQUIRE(optimizedSequence(7) == 4);
    REQUIRE(optimizedSequence(8) == 5);
    REQUIRE(optimizedSequence(9) == 6);
}

TEST_CASE("benchmarking the naiveSequence function") {
    BENCHMARK("naiveSequence(0)") {
        return naiveSequence(0);
    };

    BENCHMARK("naiveSequence(2)") {
        return naiveSequence(2);
    };

    BENCHMARK("naiveSequence(4)") {
        return naiveSequence(4);
    };

    BENCHMARK("naiveSequence(8)") {
        return naiveSequence(8);
    };

    BENCHMARK("naiveSequence(16)") {
        return naiveSequence(16);
    };

    BENCHMARK("naiveSequence(32)") {
        return naiveSequence(32);
    };

    BENCHMARK("naiveSequence(64)") {
        return naiveSequence(64);
    };

    BENCHMARK("naiveSequence(128)") {
        return naiveSequence(128);
    };

    BENCHMARK("naiveSequence(256)") {
        return naiveSequence(256);
    };
}

TEST_CASE("benchmarking the optimizedSequence function") {
    BENCHMARK("optimizedSequence(0)") {
        return optimizedSequence(0);
    };

    BENCHMARK("optimizedSequence(2)") {
        return optimizedSequence(2);
    };

    BENCHMARK("optimizedSequence(4)") {
        return optimizedSequence(4);
    };

    BENCHMARK("optimizedSequence(8)") {
        return optimizedSequence(8);
    };

    BENCHMARK("optimizedSequence(16)") {
        return optimizedSequence(16);
    };

    BENCHMARK("optimizedSequence(32)") {
        return optimizedSequence(32);
    };

    BENCHMARK("optimizedSequence(64)") {
        return optimizedSequence(64);
    };

    BENCHMARK("optimizedSequence(128)") {
        return optimizedSequence(128);
    };

    BENCHMARK("optimizedSequence(256)") {
        return optimizedSequence(256);
    };
}

#include <catch2/catch_test_macros.hpp>
#include <catch2/benchmark/catch_benchmark.hpp>
#include <catch2/benchmark/catch_constructor.hpp>
#include <catch2/generators/catch_generators_range.hpp>

#include "../src/sequence.hpp"

TEST_CASE( "nativeSequence computes correctly" ) {
    REQUIRE(nativeSequence(1) == 1);
    REQUIRE(nativeSequence(2) == 1);
    REQUIRE(nativeSequence(3) == 2);
    REQUIRE(nativeSequence(4) == 3);
    REQUIRE(nativeSequence(5) == 3);
    REQUIRE(nativeSequence(6) == 4);
    REQUIRE(nativeSequence(7) == 4);
    REQUIRE(nativeSequence(8) == 5);
    REQUIRE(nativeSequence(9) == 6);
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

TEST_CASE("benchmarking the nativeSequence function") {
    BENCHMARK("nativeSequence(0)") {
        return nativeSequence(0);
    };

    BENCHMARK("nativeSequence(2)") {
        return nativeSequence(2);
    };

    BENCHMARK("nativeSequence(4)") {
        return nativeSequence(4);
    };

    BENCHMARK("nativeSequence(8)") {
        return nativeSequence(8);
    };

    BENCHMARK("nativeSequence(16)") {
        return nativeSequence(16);
    };

    BENCHMARK("nativeSequence(32)") {
        return nativeSequence(32);
    };

    BENCHMARK("nativeSequence(64)") {
        return nativeSequence(64);
    };

    BENCHMARK("nativeSequence(128)") {
        return nativeSequence(128);
    };

    BENCHMARK("nativeSequence(256)") {
        return nativeSequence(256);
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

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

// TEST_CASE("benchmarking the factorial function") {
//     BENCHMARK("factorial(20)") {
//         return factorial(20);
//     };

//     BENCHMARK("factorial(25)") {
//         return factorial(25);
//     };

//     BENCHMARK("factorial(30)") {
//         return factorial(30);
//     };

//     BENCHMARK("factorial(35)") {
//         return factorial(35);
//     };
// }

#include <catch2/catch_test_macros.hpp>
#include <catch2/benchmark/catch_benchmark.hpp>
#include <catch2/benchmark/catch_constructor.hpp>
#include <catch2/generators/catch_generators_range.hpp>

#include "../src/where.hpp"

TEST_CASE( "it finds a character" ) {
    REQUIRE(findWithinString("The quick brown fox", 'e') == 2);
}
TEST_CASE( "it finds a letter in a string" ) {
    REQUIRE(findWithinString("The quick brown fox", "e") == 2);
}
TEST_CASE( "it finds a space" ) {
    REQUIRE(findWithinString("The quick brown fox", " ") == 3);
}
TEST_CASE( "it finds a multiple letters in a string" ) {
    REQUIRE(findWithinString("The quick brown fox", "quick") == 4);
}
TEST_CASE( "it return -1 if search failed" ) {
    REQUIRE(findWithinString("The quick brown fox", "quiet") == -1);
}
TEST_CASE( "it returns properly if empty" ) {
    REQUIRE(findWithinString("The quick brown fox", "") == -1);
}
TEST_CASE( "it returns return properly after repeating letters" ) {
    REQUIRE(findWithinString("The quick brown fox", "fox") == 16);
}
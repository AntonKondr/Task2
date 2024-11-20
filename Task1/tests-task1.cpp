#include "catch.hpp"

#include "task1.h"
#include <math.h>

TEST_CASE("Kinematika -- inside bounds", "[basic]") {
    note();    
}

TEST_CASE("Kinematika intro 1/10", "[basic]") {
    a = 0.0; v = 0.0; s = 0.0; pomer = 0.0; typPohybu = -1;
    intro(15, 2, 3, -4);
    REQUIRE(typPohybu == -1);
}


TEST_CASE("Kinematika intro 1/1", "[basic]") {
    a = 0.0; v = 0.0; s = 0.0; pomer = 0.0; typPohybu = -1;
    REQUIRE(intro(-15, 2, 3, 4) == -1);
}

TEST_CASE("Kinematika intro 1/2", "[basic]") {
    a = 0.0; v = 0.0; s = 0.0; pomer = 0.0; typPohybu = -1;
    REQUIRE(intro(15, -2, 3, 4) == -2);
}

TEST_CASE("Kinematika intro 1/3", "[basic]") {
    a = 0.0; v = 0.0; s = 0.0; pomer = 0.0; typPohybu = -1;
    REQUIRE(intro(15, 2, -3, 4) == -3);
}

TEST_CASE("Kinematika intro 1/4", "[basic]") {
    a = 0.0; v = 0.0; s = 0.0; pomer = 0.0; typPohybu = -1;
    REQUIRE(intro(15, 2, 3, -4) == -4);
}

TEST_CASE("Kinematika intro 1/5", "[basic]") {
    a = 0.0; v = 0.0; s = 0.0; pomer = 0.0; typPohybu = -1;
    intro(15, 2, 3, -4);
    REQUIRE(a == 0.0);
}

TEST_CASE("Kinematika intro 1/6", "[basic]") {
    a = 0.0; v = 0.0; s = 0.0; pomer = 0.0; typPohybu = -1;
    intro(15, 2, 3, -4);
    REQUIRE(v == 0.0);
}

TEST_CASE("Kinematika intro 1/7", "[basic]") {
    a = 0.0; v = 0.0; s = 0.0; pomer = 0.0; typPohybu = -1;
    intro(15, 2, 3, -4);
    REQUIRE(s == 0.0);
}

TEST_CASE("Kinematika intro 1/8", "[basic]") {
    a = 0.0; v = 0.0; s = 0.0; pomer = 0.0; typPohybu = -1;
    intro(15, 2, 3, -4);
    REQUIRE(pomer == 0.0);
}

TEST_CASE("Kinematika intro 1/9", "[basic]") {
    a = 0.0; v = 0.0; s = 0.0; pomer = 0.0; typPohybu = -1;
    intro(15, 2, 3, -4);
    REQUIRE(typPohybu == -1);
}

// --------------------------------

TEST_CASE("Kinematika 2/1 intro", "[basic]") {
    a = 0.0; v = 0.0; s = 0.0; pomer = 0.0; typPohybu = -1;
    REQUIRE(intro(15, 2, 3, 4) == 0);
}

TEST_CASE("Kinematika 2/2 - a", "[basic]") {
    REQUIRE((double)round(a * 100) / (double)100 == -4.33); // test zrychleni
}

TEST_CASE("Kinematika 2/3 - s", "[basic]") {
    REQUIRE((double)round(s * 100) / (double)100 == 25.33); // test drahy    
}

TEST_CASE("Kinematika 2/4 - v", "[basic]") {
    REQUIRE((double)round(v * 100) / (double)100 == -2.33); // test rychlosti 
}

TEST_CASE("Kinematika 2/5 - pomer", "[basic]") {
    REQUIRE((double)round(pomer * 100) == round(13.33)); // test pomeru
}

TEST_CASE("Kinematika 2/6 - typ pohybu", "[basic]") {
    REQUIRE(typPohybu == 1); // test zrychleni
}

// --------------------------------------------------

TEST_CASE("Kinematika 3/1", "[basic]") {
    a = 0.0; v = 0.0; s = 0.0; pomer = 0.0; typPohybu = -1;
    REQUIRE(intro(2, 15, 3, 4) == 0);
}

TEST_CASE("Kinematika 3/2 - a", "[basic]") {
    REQUIRE((double)round(a * 100) / (double)100 == 4.33); // test zrychleni
}

TEST_CASE("Kinematika 3/3 - s", "[basic]") {
    REQUIRE((double)round(s * 100) / (double)100 == 42.67); // test drahy
}

TEST_CASE("Kinematika 3/4 - v", "[basic]") {
    REQUIRE((double)round(v * 100) / (double)100 == 19.33); // test rychlosti 
}

TEST_CASE("Kinematika 3/5 - pomer", "[basic]") {
    REQUIRE((double)round(pomer * 100) == 750.0); // test pomeru
}

TEST_CASE("Kinematika 3/6 - typ pohybu", "[basic]") {
    REQUIRE(typPohybu == 3); // test zrychleni
}

// --------------------------------------------------

TEST_CASE("Kinematika 4/1", "[basic]") {
    a = -5.0; v = 0.0; s = 0.0; pomer = 0.0; typPohybu = -1;
    REQUIRE(intro(15, 15, 3, 4) == 0);
}

TEST_CASE("Kinematika 4/2 - a", "[basic]") {
    REQUIRE((double)round(a * 100) / (double)100 == 0.0); // test zrychleni
}

TEST_CASE("Kinematika 4/3 - s", "[basic]") {
    REQUIRE((double)round(s * 100) / (double)100 == 60.0); // test drahy
}

TEST_CASE("Kinematika 4/4 - v", "[basic]") {
    REQUIRE((double)round(v * 100) / (double)100 == 15.0); // test rychlosti 
}

TEST_CASE("Kinematika 4/5 - pomer", "[basic]") {
    REQUIRE((double)round(pomer * 100) == 100.0); // test pomeru
}

TEST_CASE("Kinematika 4/6 - typ pohybu", "[basic]") {
    REQUIRE(typPohybu == 2); // test zrychleni
}

#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include "distlog/greeting.pb.h"

using distlog::Greeting;
using testing::Property;

TEST(Foo, Bar) {
    auto greeting = Greeting::default_instance();
    greeting.set_greeter("me");
    greeting.set_greeted("you");
    greeting.set_greeting("hello, world");
    EXPECT_THAT(greeting, Property(&Greeting::greeting, "hello, world"));
}

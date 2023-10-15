load("@rules_cc//cc:defs.bzl", "cc_binary", "cc_library")
load("@rules_cc//cc:defs.bzl", "cc_proto_library")
load("@rules_proto//proto:defs.bzl", "proto_library")

proto_library(
    name = "greeting_proto",
    srcs = ["greeting.proto"],
    deps = [],
)

cc_proto_library(
    name = "greeting_cc_proto",
    deps = [":greeting_proto"],
)

cc_binary(
    name = "main",
    srcs = ["main.cc"],
    deps = [":greeting_cc_proto"],
)

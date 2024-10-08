///
/// CrnlNitroAutolinking.mm
/// This file was generated by nitrogen. DO NOT MODIFY THIS FILE.
/// https://github.com/mrousavy/nitro
/// Copyright © 2024 Marc Rousavy @ Margelo
///

#import <Foundation/Foundation.h>
#import <NitroModules/HybridObjectRegistry.hpp>
#import "CrnlNitro-Swift-Cxx-Umbrella.hpp"
#import <type_traits>

#include "HybridCrnlNitroSpecSwift.hpp"

@interface CrnlNitroAutolinking : NSObject
@end

@implementation CrnlNitroAutolinking

+ (void) load {
  using namespace margelo::nitro;
  using namespace margelo::nitro::CrnlNitro;

  HybridObjectRegistry::registerHybridObjectConstructor(
    "CrnlNitro",
    []() -> std::shared_ptr<HybridObject> {
      auto swiftPart = CrnlNitro::CrnlNitroAutolinking::createCrnlNitro();
      return std::make_shared<HybridCrnlNitroSpecSwift>(swiftPart);
    }
  );
}

@end

///
/// HybridCrnlNitroSpec.hpp
/// This file was generated by nitrogen. DO NOT MODIFY THIS FILE.
/// https://github.com/mrousavy/nitro
/// Copyright © 2024 Marc Rousavy @ Margelo
///

#pragma once

#include <NitroModules/JHybridObject.hpp>
#include <fbjni/fbjni.h>
#include "HybridCrnlNitroSpec.hpp"

namespace margelo::nitro::CrnlNitro {

  using namespace facebook;

  class JHybridCrnlNitroSpec final: public jni::HybridClass<JHybridCrnlNitroSpec, JHybridObject>,
                                    public HybridCrnlNitroSpec {
  public:
    static auto constexpr kJavaDescriptor = "Lcom/margelo/nitro/crnlnitro/HybridCrnlNitroSpec;";
    static jni::local_ref<jhybriddata> initHybrid(jni::alias_ref<jhybridobject> jThis);
    static void registerNatives();

  private:
    // C++ constructor (called from Java via `initHybrid()`)
    explicit JHybridCrnlNitroSpec(jni::alias_ref<jhybridobject> jThis) :
      HybridObject(HybridCrnlNitroSpec::TAG),
      _javaPart(jni::make_global(jThis)) {}

  public:
    size_t getExternalMemorySize() noexcept override;

  public:
    inline const jni::global_ref<JHybridCrnlNitroSpec::javaobject>& getJavaPart() const noexcept {
      return _javaPart;
    }

  public:
    // Properties
    

  public:
    // Methods
    double add(double a, double b) override;

  private:
    friend HybridBase;
    using HybridBase::HybridBase;
    jni::global_ref<JHybridCrnlNitroSpec::javaobject> _javaPart;
  };

} // namespace margelo::nitro::CrnlNitro

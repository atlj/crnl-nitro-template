///
/// HybridCrnlNitroSpec.hpp
/// This file was generated by nitrogen. DO NOT MODIFY THIS FILE.
/// https://github.com/mrousavy/nitro
/// Copyright © 2024 Marc Rousavy @ Margelo
///

#pragma once

#if __has_include(<NitroModules/HybridObject.hpp>)
#include <NitroModules/HybridObject.hpp>
#else
#error NitroModules cannot be found! Are you sure you installed NitroModules properly?
#endif





namespace margelo::nitro::crnlnitro {

  using namespace margelo::nitro;

  /**
   * An abstract base class for `CrnlNitro`
   * Inherit this class to create instances of `HybridCrnlNitroSpec` in C++.
   * You must explicitly call `HybridObject`'s constructor yourself, because it is virtual.
   * @example
   * ```cpp
   * class HybridCrnlNitro: public HybridCrnlNitroSpec {
   * public:
   *   HybridCrnlNitro(...): HybridObject(TAG) { ... }
   *   // ...
   * };
   * ```
   */
  class HybridCrnlNitroSpec: public virtual HybridObject {
    public:
      // Constructor
      explicit HybridCrnlNitroSpec(): HybridObject(TAG) { }

      // Destructor
      virtual ~HybridCrnlNitroSpec() { }

    public:
      // Properties
      

    public:
      // Methods
      virtual double multiply(double a, double b) = 0;

    protected:
      // Hybrid Setup
      void loadHybridMethods() override;

    protected:
      // Tag for logging
      static constexpr auto TAG = "CrnlNitro";
  };

} // namespace margelo::nitro::crnlnitro

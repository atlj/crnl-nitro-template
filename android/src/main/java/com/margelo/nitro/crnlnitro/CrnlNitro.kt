package com.margelo.nitro.crnlnitro

class CrnlNitro : HybridCrnlNitroSpec() {
  override val memorySize: Long
    get() = 0L

  override fun multiply(a: Double, b: Double): Double {
    return a * b
  }
}

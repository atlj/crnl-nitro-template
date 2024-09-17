class CrnlNitro: HybridCrnlNitroSpec {
    var hybridContext = margelo.nitro.HybridContext()
    var memorySize: Int {
        getSizeOf(self)
    }
    
    func add(a: Double, b: Double) throws -> Double {
        return a + b
    }
}

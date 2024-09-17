const CrnlNitro = require('./NativeCrnlNitro').default;

export function multiply(a: number, b: number): number {
  return CrnlNitro.multiply(a, b);
}

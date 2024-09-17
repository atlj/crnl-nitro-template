import { NitroModules } from 'react-native-nitro-modules';
import type { CrnlNitro } from './CrnlNitro.nitro';

export const CrnlNitroHybridObject =
  NitroModules.createHybridObject<CrnlNitro>('CrnlNitro');

export function add(a: number, b: number): number {
  return CrnlNitroHybridObject.add(a, b);
}

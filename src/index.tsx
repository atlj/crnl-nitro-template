import { NitroModules } from 'react-native-nitro-modules';
import { Platform } from 'react-native';
import type { CrnlNitro } from './CrnlNitro.nitro';

const LINKING_ERROR =
  `The package 'crnl-nitro' doesn't seem to be linked. Make sure: \n\n` +
  Platform.select({ ios: "- You have run 'pod install'\n", default: '' }) +
  '- You rebuilt the app after installing the package\n' +
  '- You are not using Expo Go\n';

export const CrnlNitroHybridObject =
  NitroModules.createHybridObject<CrnlNitro>('CrnlNitro');

const CrnlNitro = CrnlNitroHybridObject
  ? CrnlNitroHybridObject
  : (new Proxy(
      {},
      {
        get() {
          throw new Error(LINKING_ERROR);
        },
      }
    ) as CrnlNitro);

export function multiply(a: number, b: number): number {
  return CrnlNitro.multiply(a, b);
}

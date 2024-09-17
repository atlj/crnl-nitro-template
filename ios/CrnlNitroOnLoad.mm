#import <Foundation/Foundation.h>
#import <NitroModules/HybridObjectRegistry.hpp>

@interface CrnlNitroOnLoad : NSObject
@end

@implementation CrnlNitroOnLoad

using namespace margelo::nitro;

+ (void)load {
  // TODO: Register all Swift Hybrid Objects here
  // TODO: Register all C++ Hybrid Objects here
}

@end

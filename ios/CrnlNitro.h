#ifdef __cplusplus
#import "react-native-crnl-nitro.h"
#endif

#ifdef RCT_NEW_ARCH_ENABLED
#import "RNCrnlNitroSpec.h"

@interface CrnlNitro : NSObject <NativeCrnlNitroSpec>
#else
#import <React/RCTBridgeModule.h>

@interface CrnlNitro : NSObject <RCTBridgeModule>
#endif

@end

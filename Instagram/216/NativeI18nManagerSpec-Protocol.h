//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "RCTBridgeModule-Protocol.h"
#import "RCTTurboModule-Protocol.h"

@class _RCTTypedModuleConstants;

@protocol NativeI18nManagerSpec <RCTBridgeModule, RCTTurboModule>
- (_RCTTypedModuleConstants *)getConstants;
- (_RCTTypedModuleConstants *)constantsToExport;
- (void)swapLeftAndRightInRTL:(_Bool)arg1;
- (void)forceRTL:(_Bool)arg1;
- (void)allowRTL:(_Bool)arg1;
@end


//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "RCTBridgeModule-Protocol.h"
#import "RCTTurboModule-Protocol.h"

@class NSArray, NSDictionary, NSString, _RCTTypedModuleConstants;

@protocol NativeNavigationSpec <RCTBridgeModule, RCTTurboModule>
- (_RCTTypedModuleConstants *)getConstants;
- (_RCTTypedModuleConstants *)constantsToExport;
- (void)setInstanceStateToSave:(double)arg1 key:(NSString *)arg2 state:(NSDictionary *)arg3;
- (void)getSavedInstanceState:(double)arg1 key:(NSString *)arg2 callback:(void (^)(NSArray *))arg3;
- (void)updateNativeRoutesConfiguration:(NSString *)arg1;
- (void)updateAppRegistryConfiguration:(NSString *)arg1;
- (void)setBadgeConfig:(NSDictionary *)arg1;
- (void)setSections:(NSArray *)arg1;
- (void)popToScreen:(double)arg1 destinationReactTag:(double)arg2;
- (void)setRouteStack:(double)arg1 routes:(NSArray *)arg2;
- (void)reloadReact;
- (void)replaceTarget:(double)arg1 target:(NSString *)arg2 type:(NSString *)arg3;
- (void)present:(double)arg1 url:(NSString *)arg2;
- (void)openURL:(double)arg1 url:(NSString *)arg2;
- (void)clearRightBarButton:(double)arg1;
- (void)setBarPrimaryAction:(double)arg1 action:(NSDictionary *)arg2;
- (void)setBarLeftAction:(double)arg1 action:(NSDictionary *)arg2;
- (void)setBarTitleWithConfig:(double)arg1 config:(NSDictionary *)arg2;
- (void)setBarTitle:(double)arg1 title:(NSString *)arg2;
- (void)dismiss:(double)arg1 options:(NSDictionary *)arg2;
- (void)pop:(double)arg1;
- (void)navigate:(double)arg1 target:(NSString *)arg2 params:(NSDictionary *)arg3;
@end


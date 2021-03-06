//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "RCTViewManager.h"

@interface RCTImageViewManager : RCTViewManager
{
}

+ (const struct RCTMethodInfo *)__rct_export__1073;
+ (const struct RCTMethodInfo *)__rct_export__862;
+ (const struct RCTMethodInfo *)__rct_export__711;
+ (const struct RCTMethodInfo *)__rct_export__560;
+ (id)propConfig_tintColor;
+ (id)propConfig_source;
+ (id)propConfig_internal_analyticTag;
+ (id)propConfig_resizeMode;
+ (id)propConfig_onLoadEnd;
+ (id)propConfig_onLoad;
+ (id)propConfig_onPartialLoad;
+ (id)propConfig_onError;
+ (id)propConfig_onProgress;
+ (id)propConfig_onLoadStart;
+ (id)propConfig_defaultSource;
+ (id)propConfig_capInsets;
+ (id)propConfig_blurRadius;
+ (void)load;
+ (id)moduleName;
- (void)queryCache:(id)arg1 resolve:(CDUnknownBlockType)arg2 reject:(CDUnknownBlockType)arg3;
- (void)prefetchImage:(id)arg1 resolve:(CDUnknownBlockType)arg2 reject:(CDUnknownBlockType)arg3;
- (void)getSizeWithHeaders:(id)arg1 resolve:(CDUnknownBlockType)arg2 reject:(CDUnknownBlockType)arg3;
- (void)getSize:(id)arg1 successBlock:(CDUnknownBlockType)arg2 errorBlock:(CDUnknownBlockType)arg3;
- (void)set_tintColor:(id)arg1 forView:(id)arg2 withDefaultView:(id)arg3;
- (id)view;
- (id)shadowView;

@end


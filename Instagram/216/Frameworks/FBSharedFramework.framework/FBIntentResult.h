//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/FBIvarBasedEqualityObject.h>

@class FBAnalyticsInfo, FBIntentSource, FBNavigationInfo;
@protocol FBIntentTarget;

@interface FBIntentResult : FBIvarBasedEqualityObject
{
    unsigned long long _subtype;
    id <FBIntentTarget> _redirect_intentTarget;
    FBIntentSource *_redirect_source;
    FBAnalyticsInfo *_redirect_analyticsInfo;
    FBNavigationInfo *_navigationInfo;
    CDUnknownBlockType _handled_dangerousNavigationBlock;
}

+ (id)redirectWithIntentTarget:(id)arg1 source:(id)arg2 analyticsInfo:(id)arg3;
+ (id)navigationInfo:(id)arg1;
+ (id)handledWithDangerousNavigationBlock:(CDUnknownBlockType)arg1;
- (void).cxx_destruct;
- (void)matchRedirect:(CDUnknownBlockType)arg1 navigationInfo:(CDUnknownBlockType)arg2 handled:(CDUnknownBlockType)arg3;

@end

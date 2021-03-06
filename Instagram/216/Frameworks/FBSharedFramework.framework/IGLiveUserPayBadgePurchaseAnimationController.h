//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IGUserSession, KeyframesView, NSMutableDictionary;

@interface IGLiveUserPayBadgePurchaseAnimationController : NSObject
{
    IGUserSession *_userSession;
    NSMutableDictionary *_badgePurchaseAnimationViewsDictionary;
    KeyframesView *_milestoneGlowAnimationView;
}

- (void).cxx_destruct;
- (void)_loadAnimationForURL:(id)arg1 cacheKey:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)loadBadgePurchaseMilestoneAnimationWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)loadBadgePurchaseAnimationForSupportTier:(long long)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (id)initWithUserSession:(id)arg1;

@end


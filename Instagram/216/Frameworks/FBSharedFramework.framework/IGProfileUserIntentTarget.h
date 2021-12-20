//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/FBIntentTarget-Protocol.h>

@class IGCTAPresenterContext, IGSessionTracker, IGUserDetailConfiguration, NSString, UIBarButtonItem;

@interface IGProfileUserIntentTarget : NSObject <FBIntentTarget>
{
    _Bool _isMainProfileSurface;
    _Bool _useNavigationControllerToPresent;
    IGUserDetailConfiguration *_configuration;
    IGCTAPresenterContext *_ctaPresenterContextVCProviding;
    UIBarButtonItem *_leftBarButtonItem;
    IGSessionTracker *_shoppingSessionTracker;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) IGSessionTracker *shoppingSessionTracker; // @synthesize shoppingSessionTracker=_shoppingSessionTracker;
@property(readonly, nonatomic) _Bool useNavigationControllerToPresent; // @synthesize useNavigationControllerToPresent=_useNavigationControllerToPresent;
@property(readonly, nonatomic) UIBarButtonItem *leftBarButtonItem; // @synthesize leftBarButtonItem=_leftBarButtonItem;
@property(readonly, nonatomic) _Bool isMainProfileSurface; // @synthesize isMainProfileSurface=_isMainProfileSurface;
@property(readonly, nonatomic) IGCTAPresenterContext *ctaPresenterContextVCProviding; // @synthesize ctaPresenterContextVCProviding=_ctaPresenterContextVCProviding;
@property(readonly, nonatomic) IGUserDetailConfiguration *configuration; // @synthesize configuration=_configuration;
- (id)initWithConfiguration:(id)arg1 ctaPresenterContextVCProviding:(id)arg2 isMainProfileSurface:(_Bool)arg3 leftBarButtonItem:(id)arg4 useNavigationControllerToPresent:(_Bool)arg5 shoppingSessionTracker:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


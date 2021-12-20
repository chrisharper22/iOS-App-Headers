//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/IGNavigationEventListener-Protocol.h>

@class NSString, UIViewController;

@interface IGStatusBarHandler : NSObject <IGNavigationEventListener>
{
    UIViewController *_transitioningViewController;
    _Bool _prefersStatusBarHidden;
    long long _preferredStatusBarStyle;
    long long _preferredStatusBarUpdateAnimation;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
@property(readonly, nonatomic) long long preferredStatusBarUpdateAnimation; // @synthesize preferredStatusBarUpdateAnimation=_preferredStatusBarUpdateAnimation;
@property(readonly, nonatomic) long long preferredStatusBarStyle; // @synthesize preferredStatusBarStyle=_preferredStatusBarStyle;
@property(readonly, nonatomic) _Bool prefersStatusBarHidden; // @synthesize prefersStatusBarHidden=_prefersStatusBarHidden;
- (void)_viewControllerDidSetNeedsStatusBarAppearanceUpdate:(id)arg1;
- (void)viewControllerDidUpdate:(id)arg1 updateExtras:(id)arg2;
- (void)viewControllerDidDeallocWithAnalyticsModule:(id)arg1;
- (void)viewControllerDidDisappear:(id)arg1 withEventData:(id)arg2;
- (void)viewControllerDidAppear:(id)arg1 withEventData:(id)arg2;
- (void)viewControllerWillDisappear:(id)arg1;
- (void)viewControllerWillAppear:(id)arg1;
- (void)setNeedsStatusBarAppearanceUpdate;
- (id)_init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

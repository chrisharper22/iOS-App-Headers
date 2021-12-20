//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGViewController.h>

#import "IGEditPostMediaFrameSize-Protocol.h"
#import "IGIntentNavigating-Protocol.h"

@class IGUserSession, NSString, UIViewController;

@interface IGInsightsViewController : IGViewController <IGEditPostMediaFrameSize, IGIntentNavigating>
{
    unsigned long long _initialTabIndex;
    IGUserSession *_userSession;
    NSString *_entryPoint;
    UIViewController *_currentViewController;
}

+ (id)subtitleDateString;
- (void).cxx_destruct;
@property(readonly, nonatomic) UIViewController *currentViewController; // @synthesize currentViewController=_currentViewController;
@property(readonly, copy, nonatomic) NSString *entryPoint; // @synthesize entryPoint=_entryPoint;
@property(readonly, nonatomic) IGUserSession *userSession; // @synthesize userSession=_userSession;
- (void)_updateToTabIndex:(unsigned long long)arg1;
- (struct CGRect)editPostMediaFrameSizeForMedia:(id)arg1 headerHeight:(double)arg2 viewController:(id)arg3;
- (void)viewDidLayoutSubviews;
- (_Bool)allowsNavigationGestureForGestureOrigin:(struct CGPoint)arg1;
- (id)_createInsightsViewController;
- (void)_setUpInitialViewController;
- (void)navigateToIntent:(id)arg1 withNavigationInfo:(id)arg2;
- (void)updateToTabIndexWithKey:(id)arg1;
- (void)viewDidLoad;
- (id)initWithUserSession:(id)arg1 entryPoint:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


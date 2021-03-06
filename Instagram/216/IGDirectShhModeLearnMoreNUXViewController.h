//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "IGAnalyticsModule-Protocol.h"
#import "IGGestureHandler-Protocol.h"

@class IGInterstitialView, IGUserSession, NSString;

@interface IGDirectShhModeLearnMoreNUXViewController : UIViewController <IGGestureHandler, IGAnalyticsModule>
{
    IGUserSession *_userSession;
    IGInterstitialView *_interstitialView;
    _Bool _replayableMessagesEnabled;
}

- (void).cxx_destruct;
- (void)_showInteropUpsell;
- (id)_upsellBottomButtons;
- (id)_defaultBottomButtons;
- (id)analyticsModule;
- (void)_dismiss;
- (_Bool)canRespondToGesture:(id)arg1;
- (struct CGSize)preferredContentSize;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithUserSession:(id)arg1 replayableMessagesEnabled:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


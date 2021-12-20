//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGViewController.h>

#import "IGFBCrossPostingFeedAudienceSheetDelegate-Protocol.h"
#import "IGGestureHandler-Protocol.h"

@class IGFBCrossPostingFeedAudienceSheetView, IGUserSession, NSString;

@interface IGFBCrossPostingFeedAudienceSheetViewController : IGViewController <IGFBCrossPostingFeedAudienceSheetDelegate, IGGestureHandler>
{
    IGFBCrossPostingFeedAudienceSheetView *_contentView;
    IGUserSession *_userSession;
}

- (void).cxx_destruct;
- (void)_logUpsellEventWithEventName:(id)arg1;
- (void)IGFBCrossPostingFeedAudienceSheetDidTapDontChange;
- (void)IGFBCrossPostingFeedAudienceSheetDidTapChangeAudience;
- (_Bool)canRespondToGesture:(id)arg1;
- (struct CGSize)preferredContentSize;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithUserSession:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

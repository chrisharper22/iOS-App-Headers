//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGPassthroughView.h>

#import "IGSundialViewerVerticalUFIDelegate-Protocol.h"

@class IGSundialViewerVerticalUFI, IGVideoPlaybackVerticalUFIViewModel, NSString;
@protocol IGTVVideoPlaybackVerticalActionBarViewDelegate;

@interface IGTVVideoPlaybackVerticalActionBarView : IGPassthroughView <IGSundialViewerVerticalUFIDelegate>
{
    IGSundialViewerVerticalUFI *_verticalUFI;
    IGVideoPlaybackVerticalUFIViewModel *_viewModel;
    id <IGTVVideoPlaybackVerticalActionBarViewDelegate> _delegate;
}

- (void).cxx_destruct;
- (void)sundialViewerUFI:(id)arg1 didLongPressSendButton:(id)arg2 gestureRecognizer:(id)arg3;
- (void)sundialViewerUFI:(id)arg1 didTapAudioAttributionButton:(id)arg2;
- (void)sundialViewerUFI:(id)arg1 didTapMoreOptionsButton:(id)arg2;
- (void)sundialViewerUFI:(id)arg1 didTapRemixButton:(id)arg2;
- (void)sundialViewerUFI:(id)arg1 didTapLikeButton:(id)arg2;
- (void)sundialViewerUFI:(id)arg1 didTapLikeCountButton:(id)arg2;
- (void)sundialViewerUFI:(id)arg1 didTapSendButton:(id)arg2;
- (void)sundialViewerUFI:(id)arg1 didTapCommentButton:(id)arg2;
- (void)configureWithViewModel:(id)arg1 delegate:(id)arg2;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGPassthroughView.h>

#import "IGCoreTextLinkHandler-Protocol.h"
#import "IGProfilePhotoViewDelegate-Protocol.h"

@class IGCoreTextView, IGLiveCuratorContainerView, IGProfilePhotoView, IGStoryFacepileView, IGTVVideoPlaybackCreatorViewModel, IGTapButton, NSString, UIImageView, UILabel;
@protocol IGTVVideoPlaybackCreatorViewDelegate;

@interface IGTVVideoPlaybackCreatorView : IGPassthroughView <IGProfilePhotoViewDelegate, IGCoreTextLinkHandler>
{
    IGProfilePhotoView *_profilePhotoView;
    IGCoreTextView *_usernameAttributionTextView;
    IGLiveCuratorContainerView *_liveRingView;
    IGTapButton *_attributionButton;
    UIImageView *_verifiedImageView;
    UILabel *_dotSeparatorLabel;
    IGStoryFacepileView *_facepileView;
    IGTVVideoPlaybackCreatorViewModel *_viewModel;
    id <IGTVVideoPlaybackCreatorViewDelegate> _delegate;
}

- (void).cxx_destruct;
- (void)_handleLiveRingTap;
- (void)_handleProfileTap;
- (void)_attributionButtonTapped:(id)arg1;
- (void)profilePhotoViewDidLongPressProfilePicture:(id)arg1;
- (void)profilePhotoViewDidTapProfilePicture:(id)arg1;
- (void)coreTextView:(id)arg1 didLongTapOnString:(id)arg2 URL:(id)arg3;
- (void)coreTextView:(id)arg1 didTapOnString:(id)arg2 URL:(id)arg3;
- (void)configureWithViewModel:(id)arg1 delegate:(id)arg2;
- (id)_profileAttributionView;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


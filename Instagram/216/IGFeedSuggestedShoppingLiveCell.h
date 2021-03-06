//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGBouncyCollectionViewCell.h>

#import "IGFeedSuggestedShoppingLivesCellPlayable-Protocol.h"
#import "IGLiveCardCellDisplaying-Protocol.h"

@class IGGradientView, IGLiveIndicatorView, IGLiveMediaPlayerView, IGStackLayout, NSDictionary, NSString, UILabel;
@protocol IGLiveCardCellDisplayingDelegate, IGStoryPlayerMediaViewType;

@interface IGFeedSuggestedShoppingLiveCell : IGBouncyCollectionViewCell <IGLiveCardCellDisplaying, IGFeedSuggestedShoppingLivesCellPlayable>
{
    IGLiveMediaPlayerView *_liveMediaView;
    IGLiveIndicatorView *_liveIndicatorView;
    IGGradientView *_bottomGradient;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    IGStackLayout *_layout;
    id <IGLiveCardCellDisplayingDelegate> _delegate;
}

+ (struct CGSize)sizeThatFitsContainerSize:(struct CGSize)arg1 layoutConfig:(struct IGGridLayoutConfiguration)arg2;
- (void).cxx_destruct;
@property(readonly, nonatomic) IGLiveMediaPlayerView *liveMediaView; // @synthesize liveMediaView=_liveMediaView;
@property(nonatomic) __weak id <IGLiveCardCellDisplayingDelegate> delegate; // @synthesize delegate=_delegate;
- (void)stopPlayback;
- (void)pausePlayback;
- (void)startPlayback;
- (void)preparePlayback;
- (void)setGuestsCount:(long long)arg1;
- (void)setLiveViewerCount:(long long)arg1;
@property(readonly, nonatomic) NSDictionary *videoDebugDetails;
@property(readonly, nonatomic) id <IGStoryPlayerMediaViewType> mediaObject;
- (void)configureWithLiveViewModel:(id)arg1 userSession:(id)arg2 delegate:(id)arg3 loggingContext:(id)arg4 viewerSessionId:(id)arg5 extrasProvider:(id)arg6;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


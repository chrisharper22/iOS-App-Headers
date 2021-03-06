//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGDirectMessageCell.h>

#import "IGDirectLoadingViewProtocol-Protocol.h"
#import "IGDirectMediaViewerViewPresenting-Protocol.h"
#import "IGDirectPortraitXMAMessageBubbleViewDelegate-Protocol.h"

@class IGDirectAudioMessageBubbleView, IGDirectMessageReplyBarView, IGDirectPhotoMessageBubbleView, IGDirectPortraitXMAMessageBubbleView, IGDirectStoryMessageBubbleView, IGDirectSundialMessageBubbleView, IGDirectTextMessageBubbleView, IGDirectVideoMessageBubbleView, IGDirectVisualMessagePreviewBubbleView, IGDirectVisualMessageTombstoneBubbleView, IGMediaOverlayView, NSString, UILabel;
@protocol IGCoreTextLinkHandler, IGDirectQuotedReplyMessageCellDelegate;

@interface IGDirectQuotedReplyMessageCell : IGDirectMessageCell <IGDirectPortraitXMAMessageBubbleViewDelegate, IGDirectMediaViewerViewPresenting, IGDirectLoadingViewProtocol>
{
    unsigned long long _cellType;
    struct CGSize _contentSize;
    struct CGSize _headerSize;
    double _replyBarQuotedContentPadding;
    struct CGSize _replyBarSize;
    struct CGSize _quotedContentSize;
    struct CGSize _replyTextBubbleViewSize;
    UILabel *_headerLabel;
    IGDirectMessageReplyBarView *_replyBarView;
    IGDirectTextMessageBubbleView *_quotedTextBubbleView;
    IGDirectPhotoMessageBubbleView *_quotedPhotoBubbleView;
    IGDirectVideoMessageBubbleView *_quotedVideoBubbleView;
    IGDirectAudioMessageBubbleView *_quotedAudioBubbleView;
    IGDirectPhotoMessageBubbleView *_quotedPostBubbleView;
    IGDirectVisualMessagePreviewBubbleView *_quotedVisualMessagePreviewBubbleView;
    IGDirectVisualMessageTombstoneBubbleView *_quotedVisualMessageTombstoneBubbleView;
    IGDirectTextMessageBubbleView *_replyTextBubbleView;
    IGDirectSundialMessageBubbleView *_quotedSundialBubbleView;
    IGDirectPortraitXMAMessageBubbleView *_quotedPortraitXmaBubbleView;
    IGDirectStoryMessageBubbleView *_quotedStoryBubbleView;
    IGMediaOverlayView *_mediaOverlayView;
    id <IGDirectQuotedReplyMessageCellDelegate> _quotedReplyMessageCellDelegate;
}

+ (_Bool)needsToPassTouchEvents;
+ (_Bool)needsContainerStyling;
+ (_Bool)needsSingleTapGesture;
- (void).cxx_destruct;
@property(nonatomic) __weak id <IGDirectQuotedReplyMessageCellDelegate> quotedReplyMessageCellDelegate; // @synthesize quotedReplyMessageCellDelegate=_quotedReplyMessageCellDelegate;
- (void)messageBubbleViewDidDoubleTapOnPreviewImage:(id)arg1;
- (void)messageBubbleViewDidTapOnPreviewImage:(id)arg1 targetURL:(id)arg2;
- (id)previewImageForMediaViewer;
- (id)imageViewForMediaViewer;
- (id)_gradientViewForCurrentType;
- (id)_bubbleViewForCurrentType;
- (void)didSingleTap;
- (double)reactionsOriginXOffsetForOutgoingMessage;
- (id)staticGradientView;
- (struct CGSize)messageContentSize;
- (id)contentViewForTransitionAnimation;
- (void)_configureStoryCellWithViewModel:(id)arg1;
- (void)_configurePortraitXmaCellWithViewModel:(id)arg1;
- (void)_configureSundialCellWithViewModel:(id)arg1;
- (void)_configureVisualMessageTombstoneCellWithViewModel:(id)arg1;
- (void)_configureVisualMessagePreviewCellWithViewModel:(id)arg1;
- (void)_configurePostCellWithViewModel:(id)arg1 media:(id)arg2;
- (void)_configureAudioCellWithViewModel:(id)arg1 bubbleLayoutSpec:(id)arg2;
- (void)_configureVideoCellWithViewModel:(id)arg1;
- (void)_configurePhotoCellWithViewModel:(id)arg1;
- (void)_configureTextCellWithViewModel:(id)arg1 bubbleLayoutSpec:(id)arg2;
- (void)configureAccessibility;
- (void)configureWithViewModel:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)layoutGradientIfNecessaryWithGradientBubbleTracker:(id)arg1;
- (void)_layoutReplyText;
- (void)_layoutQuotedContentForView:(id)arg1;
- (void)_layoutCommon;
- (void)layoutSubviews;
- (void)prepareForReuse;
@property(nonatomic) __weak id <IGCoreTextLinkHandler> linkHandler;
- (void)setLoading:(_Bool)arg1;
- (void)setPhotoBubbleViewDelegate:(id)arg1;
- (void)_setupQuotedStoryBubbleViewIfNeeded;
- (void)_setupQuotedPortraitXmaBubbleViewIfNeeded;
- (void)_setupQuotedSundialBubbleViewIfNeeded;
- (void)_setupQuotedVisualMessageTombstoneBubbleViewIfNeeded;
- (void)_setupQuotedVisualMessagePreviewBubbleViewIfNeeded;
- (void)_setupQuotedPostBubbleViewIfNeeded;
- (void)_setupQuotedAudioBubbleViewIfNeeded;
- (void)_setupQuotedVideoBubbleViewIfNeeded;
- (void)_setupQuotedPhotoBubbleViewIfNeeded;
- (void)_setupQuotedTextBubbleViewIfNeeded;
- (void)_setupTextReplyBubbleView;
- (void)_setupReplyBarView;
- (void)_setupHeaderLabel;
- (void)_setupSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


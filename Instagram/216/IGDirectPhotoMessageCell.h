//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGDirectMessageCell.h>

#import "IGDirectMediaViewerPresentationCellProtocol-Protocol.h"
#import "IGDirectMediaViewerViewPresenting-Protocol.h"
#import "IGDirectPhotoMessageBubbleViewDelegate-Protocol.h"
#import "IGHeartAnimatable-Protocol.h"

@class IGDirectPhotoMessageBubbleView, IGDirectPhotoMessageViewModel, NSString, UIView;
@protocol IGDirectPhotoMessageCellImageViewDelegate;

@interface IGDirectPhotoMessageCell : IGDirectMessageCell <IGDirectMediaViewerPresentationCellProtocol, IGDirectPhotoMessageBubbleViewDelegate, IGDirectMediaViewerViewPresenting, IGHeartAnimatable>
{
    IGDirectPhotoMessageViewModel *_model;
    UIView *_recognizerView;
    id <IGDirectPhotoMessageCellImageViewDelegate> _imageViewDelegate;
    IGDirectPhotoMessageBubbleView *_photoBubbleView;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) IGDirectPhotoMessageViewModel *model; // @synthesize model=_model;
@property(retain, nonatomic) IGDirectPhotoMessageBubbleView *photoBubbleView; // @synthesize photoBubbleView=_photoBubbleView;
@property(nonatomic) __weak id <IGDirectPhotoMessageCellImageViewDelegate> imageViewDelegate; // @synthesize imageViewDelegate=_imageViewDelegate;
- (id)previewImage;
- (void)photoBubbleViewDidFailLoadWithError:(id)arg1 networkRequestSummary:(id)arg2;
- (void)photoBubbleViewDidLoadImage:(id)arg1 loadSource:(id)arg2 networkRequestSummary:(id)arg3;
- (void)photoBubbleViewDidUpdateLoadingState:(id)arg1;
- (void)photoBubbleViewWillLoadImage;
- (void)refreshContentBeforeMediaViewerDismissal;
- (id)contentViewForHeartAnimation;
- (id)previewImageForMediaViewer;
- (id)imageViewForMediaViewer;
@property(readonly, nonatomic) UIView *photoImageView;
- (struct CGSize)messageContentSize;
- (void)configureWithViewModel:(id)arg1 recognizerView:(id)arg2;
- (void)configureWithViewModel:(id)arg1;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)_setupSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


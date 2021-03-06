//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

#import "IGFeedPhotoViewDelegate-Protocol.h"

@class IGFeedPhotoView, IGMediaIndicatorConfiguration, IGPostItem, IGUserSession, IGZoomController, NSArray, NSString;
@protocol IGFeedItemPagePhotoCellDelegate, IGZoomControllerZoomingDelegate;

@interface IGFeedItemPagePhotoCell : UICollectionViewCell <IGFeedPhotoViewDelegate>
{
    NSArray *_accessibilityCustomActions;
    IGMediaIndicatorConfiguration *_indicatorConfiguration;
    _Bool _feedCarouselMediaLoadingUpdateEnabled;
    IGUserSession *_userSession;
    IGFeedPhotoView *_photoView;
    IGPostItem *_post;
    id <IGFeedItemPagePhotoCellDelegate> _delegate;
    id <IGZoomControllerZoomingDelegate> _zoomingDelegate;
    IGZoomController *_zoomController;
}

- (void).cxx_destruct;
@property(retain, nonatomic) IGZoomController *zoomController; // @synthesize zoomController=_zoomController;
@property(nonatomic) __weak id <IGZoomControllerZoomingDelegate> zoomingDelegate; // @synthesize zoomingDelegate=_zoomingDelegate;
@property(nonatomic) __weak id <IGFeedItemPagePhotoCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak IGPostItem *post; // @synthesize post=_post;
@property(retain, nonatomic) IGFeedPhotoView *photoView; // @synthesize photoView=_photoView;
@property(retain, nonatomic) IGUserSession *userSession; // @synthesize userSession=_userSession;
- (void)_photoIndicatorAcccessibilityTap;
- (id)accessibilityCustomActions;
- (id)accessibilityHint;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityLabel;
- (void)feedPhotoView:(id)arg1 didHideTagsWithReason:(unsigned long long)arg2;
- (void)feedPhotoViewDidTapVisualSearch:(id)arg1;
- (void)feedPhotoViewDidTapAudioIndicator:(id)arg1;
- (void)feedPhotoViewDidTapOverlayIndicator:(id)arg1;
- (void)feedPhotoViewDidFailLoad:(id)arg1 error:(id)arg2 networkRequestSummary:(id)arg3;
- (void)feedPhotoView:(id)arg1 didUpdateLoadingState:(id)arg2;
- (void)feedPhotoView:(id)arg1 didShowTagsWithReason:(unsigned long long)arg2;
- (void)feedPhotoViewDidLoadImage:(id)arg1 loadSource:(id)arg2 networkRequestSummary:(id)arg3;
- (void)feedPhotoDidDoubleTapToLike:(id)arg1 locationInfo:(id)arg2;
- (void)feedPhotoViewDidTap:(id)arg1;
- (void)showTags:(_Bool)arg1 animated:(_Bool)arg2 tagVisibilityChangeReason:(unsigned long long)arg3;
- (void)setModule:(id)arg1;
- (void)configureTagOverlayAndIndicatorWithIndicatorConfiguration:(id)arg1;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


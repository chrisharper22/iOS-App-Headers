//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGFeedItemMediaCell.h>

#import "IGImageViewDelegate-Protocol.h"
#import "IGMediaIndicatorDelegate-Protocol.h"

@class IGGradientView, IGImageView, IGMedia, IGMediaCroppingInfo, IGMediaIndicator, NSString, UILabel;
@protocol IGFeedItemHighlightCoverCellDelegate;

@interface IGFeedItemHighlightCoverCell : IGFeedItemMediaCell <IGImageViewDelegate, IGMediaIndicatorDelegate>
{
    IGImageView *_coverImageView;
    IGMediaCroppingInfo *_croppingInfo;
    IGGradientView *_legibilityGradient;
    IGMediaIndicator *_viewHighlightButton;
    UILabel *_highlightTitleLabel;
    _Bool _coverPhotoLoaded;
    IGMedia *_post;
    id <IGFeedItemHighlightCoverCellDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool coverPhotoLoaded; // @synthesize coverPhotoLoaded=_coverPhotoLoaded;
@property(nonatomic) __weak id <IGFeedItemHighlightCoverCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void)setPost:(id)arg1;
- (id)post;
- (void)configureWithMedia:(id)arg1 coverImageSpecifier:(id)arg2;
- (id)mediaCellCurrentlyDisplayedImage;
- (id)defaultAccessibilityElements;
- (id)accessibilityIdentifier;
- (void)_handleSingleTap:(id)arg1;
- (void)_handleDoubleTap:(id)arg1;
- (void)mediaIndicator:(id)arg1 didChangeToState:(unsigned long long)arg2 previousState:(unsigned long long)arg3;
- (void)mediaIndicator:(id)arg1 willChangeToState:(unsigned long long)arg2 previousState:(unsigned long long)arg3;
- (void)mediaIndicatorTapped:(id)arg1;
- (void)_configureForImageLoaded;
- (void)imageView:(id)arg1 willRequestImageWithURL:(id)arg2;
- (void)imageView:(id)arg1 didUpdateDownloadProgress:(double)arg2;
- (void)imageView:(id)arg1 didFailToLoadImageWithError:(id)arg2 networkRequestSummary:(id)arg3;
- (void)imageView:(id)arg1 didUpdateLoadingState:(id)arg2;
- (void)imageView:(id)arg1 didLoadImageFromSource:(unsigned long long)arg2 networkRequestSummary:(id)arg3;
- (void)expandViewHighlightIndicator;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class IGMediaThumbnailView, NSArray, NSMutableArray, UITapGestureRecognizer;
@protocol IGLocalImagesDisplayCardViewDelegate;

@interface IGLocalImagesDisplayCardView : UIView
{
    IGMediaThumbnailView *_onePreview;
    IGMediaThumbnailView *_twoPreview;
    IGMediaThumbnailView *_threePreview;
    UITapGestureRecognizer *_tapGestureRecognizer;
    NSArray *_feedItems;
    NSMutableArray *_mediaThumbnails;
    _Bool _isNetEgoDesign;
    id <IGLocalImagesDisplayCardViewDelegate> _cardImageViewDelegate;
}

+ (double)viewHeightWithWidth:(double)arg1;
- (void).cxx_destruct;
@property(nonatomic) __weak id <IGLocalImagesDisplayCardViewDelegate> cardImageViewDelegate; // @synthesize cardImageViewDelegate=_cardImageViewDelegate;
- (void)updateImagesWithFeedItems:(id)arg1 isNetEgoDesign:(_Bool)arg2;
- (void)_layoutNetEgoDesign;
- (void)_tapped:(id)arg1;
- (void)_setupSubviews;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end


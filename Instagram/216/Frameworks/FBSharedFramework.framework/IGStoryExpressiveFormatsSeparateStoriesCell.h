//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGBouncyCollectionViewCell.h>

@class FBTimer, IGStoryExpressiveFormatsCellFooterView, IGStoryFullscreenProgressView, NSArray, UIImageView;

@interface IGStoryExpressiveFormatsSeparateStoriesCell : IGBouncyCollectionViewCell
{
    UIImageView *_imageView;
    IGStoryFullscreenProgressView *_progressView;
    IGStoryExpressiveFormatsCellFooterView *_footerView;
    NSArray *_images;
    unsigned long long _currentIndex;
    FBTimer *_timer;
}

- (void).cxx_destruct;
- (void)_animateToNextImage;
- (void)configureWithImages:(id)arg1;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

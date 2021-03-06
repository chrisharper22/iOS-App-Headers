//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import "IGFeedSidecarIndicatorViewProtocol-Protocol.h"

@class FBTimer, NSString, UILabel;

@interface IGFeedSidecarIndicatorView : UIView <IGFeedSidecarIndicatorViewProtocol>
{
    UILabel *_indicatorLabel;
    UIView *_backgroundView;
    long long _currentItem;
    long long _itemCount;
    FBTimer *_fadeOutAnimationTimer;
}

- (void).cxx_destruct;
- (id)_indicatorLabelText;
- (struct CGRect)getBackgroundViewFrame;
- (void)setIndicatorWithPhotos:(long long)arg1 andVideosCount:(long long)arg2;
- (void)setCurrentItem:(long long)arg1;
- (void)setItemCount:(long long)arg1;
- (void)cleanUpAnimationTimer;
- (void)peekCarouselIndicatorAnimated:(_Bool)arg1 withHideDelay:(double)arg2 completion:(CDUnknownBlockType)arg3;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


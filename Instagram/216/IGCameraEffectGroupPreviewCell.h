//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "IGFeedItemVideoCell_DEPRECATED.h"

#import "IGFeedPreviewableCell-Protocol.h"

@class CAGradientLayer, NSNumber, NSString, UILabel;

@interface IGCameraEffectGroupPreviewCell : IGFeedItemVideoCell_DEPRECATED <IGFeedPreviewableCell>
{
    CAGradientLayer *_gradientLayer;
    UILabel *_titleLabel;
    UILabel *_headlineLabel;
    UILabel *_ctaLabel;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSNumber *currentPlaybackTime;
- (_Bool)shouldAllowPreviewForLocation:(struct CGPoint)arg1;
- (id)image;
- (id)sessionId;
- (void)setHeadline:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class IGImageView;

@interface IGLiveUserPaySupporterBadgeView : UIView
{
    IGImageView *_imageView;
    _Bool _useSmallImage;
    long long _supportTier;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) long long supportTier; // @synthesize supportTier=_supportTier;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)configureWithSupportTier:(long long)arg1 useSmallImage:(_Bool)arg2;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end


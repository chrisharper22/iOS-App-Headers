//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIControl.h>

@class NSMutableArray, UILabel;

@interface IGRatingsAndReviewsStarsView : UIControl
{
    UILabel *_ratingScoreLabel;
    UILabel *_ratingCountLabel;
    NSMutableArray *_starIconViews;
}

- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)configureWithRatingScore:(double)arg1 ratingCount:(id)arg2 eligibility:(_Bool)arg3;
- (id)initWithFrame:(struct CGRect)arg1;

@end


//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIFont, UIImageView, UILabel;

@interface IGPollingStickerResultsView : UIView
{
    UILabel *_pollingOptionOneVotePercentageLabel;
    UILabel *_pollingOptionTwoVotePercentageLabel;
    UILabel *_pollingOptionOneVoteLabel;
    UILabel *_pollingOptionTwoVoteLabel;
    UIImageView *_pollingOptionOneBackgroundView;
    UIImageView *_pollingOptionTwoBackgroundView;
    double _pollingOptionOneVotePercent;
    UIFont *_labelFont;
}

+ (double)heightForCell;
- (void).cxx_destruct;
- (id)backgroundImageForVotePercent:(double)arg1 isWinningOption:(_Bool)arg2;
- (double)widthOfBackgroundViewForVotePercent:(double)arg1 maxLabelWidth:(double)arg2;
- (struct CGSize)sizeOfLabelWithLabelString:(id)arg1 lineBreakMode:(long long)arg2;
- (void)setPollingStickerOptions:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

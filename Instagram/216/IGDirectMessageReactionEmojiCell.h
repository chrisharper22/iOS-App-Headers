//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class CAShapeLayer, IGDirectMessageReactionEmojiCellViewModel, UILabel;

@interface IGDirectMessageReactionEmojiCell : UICollectionViewCell
{
    UILabel *_label;
    CAShapeLayer *_dotLayer;
    IGDirectMessageReactionEmojiCellViewModel *_model;
}

+ (id)fontForEmojiSize:(struct CGSize)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) IGDirectMessageReactionEmojiCellViewModel *model; // @synthesize model=_model;
- (id)accessibilityLabel;
- (void)_cleanUpLabelAnimations;
- (void)_animateLabelIfNecessary;
- (void)_animateEmojiBounceWithModel:(id)arg1;
- (void)_configureWithModel:(id)arg1;
- (void)setEmojiHidden:(_Bool)arg1;
- (void)configureWithModel:(id)arg1 animationType:(long long)arg2;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end


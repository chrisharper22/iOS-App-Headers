//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class IGStoryMentionUserView, NSString;

@interface IGStoryMentionCell : UICollectionViewCell
{
    IGStoryMentionUserView *_userView;
    NSString *_username;
    _Bool _userIsNotMentionable;
}

+ (struct CGSize)preferredSize;
- (void).cxx_destruct;
- (void)_updateRingVisibility;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityLabel;
- (_Bool)isAccessibilityElement;
- (void)setHighlighted:(_Bool)arg1;
- (void)setSelected:(_Bool)arg1;
- (void)configureWithUser:(id)arg1 module:(id)arg2 userIsNotMentionable:(_Bool)arg3;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end


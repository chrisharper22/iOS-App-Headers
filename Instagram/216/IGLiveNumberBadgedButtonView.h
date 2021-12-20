//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class IGTapButton, IGUnreadBubbleView;

@interface IGLiveNumberBadgedButtonView : UIView
{
    IGUnreadBubbleView *_badgeView;
    IGTapButton *_button;
    long long _badgeCount;
    struct CGSize _badgeSize;
    struct UIOffset _badgeOffset;
}

- (void).cxx_destruct;
@property(nonatomic) struct UIOffset badgeOffset; // @synthesize badgeOffset=_badgeOffset;
@property(nonatomic) struct CGSize badgeSize; // @synthesize badgeSize=_badgeSize;
@property(nonatomic) long long badgeCount; // @synthesize badgeCount=_badgeCount;
@property(readonly, nonatomic) IGUnreadBubbleView *badgeView; // @synthesize badgeView=_badgeView;
@property(readonly, nonatomic) IGTapButton *button; // @synthesize button=_button;
- (struct CGSize)intrinsicContentSize;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 button:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

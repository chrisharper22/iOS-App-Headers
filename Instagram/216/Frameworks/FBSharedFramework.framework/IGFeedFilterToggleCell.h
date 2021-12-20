//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGCollectionViewCell.h>

@class IGSwitch, UILabel;

@interface IGFeedFilterToggleCell : IGCollectionViewCell
{
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    IGSwitch *_switch;
    CDUnknownBlockType _changeBlock;
}

+ (double)heightWithTitle:(id)arg1 subtitle:(id)arg2 width:(double)arg3;
- (void).cxx_destruct;
- (void)_didToggleSwitch:(_Bool)arg1;
- (void)configureWithTitle:(id)arg1 subtitle:(id)arg2 enabled:(_Bool)arg3 on:(_Bool)arg4 action:(CDUnknownBlockType)arg5;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end


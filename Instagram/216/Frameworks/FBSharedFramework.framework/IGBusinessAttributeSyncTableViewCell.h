//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGTableViewCell.h>

@class IGSwitch, UILabel;
@protocol IGBusinessAttributeSyncTableViewCellDelegate;

@interface IGBusinessAttributeSyncTableViewCell : IGTableViewCell
{
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    IGSwitch *_toggle;
    id <IGBusinessAttributeSyncTableViewCellDelegate> _delegate;
}

+ (double)cellHeightForText:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) __weak id <IGBusinessAttributeSyncTableViewCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_switchValueIsOn:(_Bool)arg1;
- (void)_setup;
- (void)configureWithViewModel:(id)arg1;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end


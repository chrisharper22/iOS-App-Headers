//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGBouncyButton.h>

@class NSString, UIImageView, UILabel;

@interface IGStoryMusicBrowserIconAssetTextButton : IGBouncyButton
{
    UILabel *_titleLabel;
    UIImageView *_iconView;
    UIImageView *_backgroundView;
    unsigned long long _iconAsset;
    unsigned long long _iconLocation;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long iconLocation; // @synthesize iconLocation=_iconLocation;
@property(nonatomic) unsigned long long iconAsset; // @synthesize iconAsset=_iconAsset;
- (void)_updateLabelTitle:(id)arg1;
@property(copy, nonatomic) NSString *text;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end


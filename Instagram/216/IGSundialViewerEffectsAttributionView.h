//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGBouncyButton.h>

@class NSArray, UIImageView, UILabel;

@interface IGSundialViewerEffectsAttributionView : IGBouncyButton
{
    UIImageView *_imageView;
    UILabel *_titleLabel;
    _Bool _showEffectsView;
    NSArray *_effectConfigs;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool showEffectsView; // @synthesize showEffectsView=_showEffectsView;
@property(retain, nonatomic) NSArray *effectConfigs; // @synthesize effectConfigs=_effectConfigs;
- (void)_updateAccessibilityLabelForTitle:(id)arg1;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)init;

@end


//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGBouncyButton.h>

@class NSString, UILabel, UIVisualEffectView;

@interface IGSundialToastMessageView : IGBouncyButton
{
    UIVisualEffectView *_backdrop;
    UILabel *_titleLabel;
    UILabel *_okLabel;
    IGBouncyButton *_okButton;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) IGBouncyButton *okButton; // @synthesize okButton=_okButton;
@property(retain, nonatomic) NSString *messageText;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end


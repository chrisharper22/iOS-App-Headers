//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGBouncyButton.h>

@class UILabel;
@protocol IGSundialNUXCTAButtonDelegate;

@interface IGSundialNUXCTAButton : IGBouncyButton
{
    UILabel *_label;
    id <IGSundialNUXCTAButtonDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGSundialNUXCTAButtonDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_didTapButton;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 buttonText:(id)arg2;

@end
